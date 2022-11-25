#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#include <map>
#include<numeric>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
void Swap(int* first, int* second) {
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}
void BubbleSort(vector<int>v, int size) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < size-1; i++) {
            if (v[i] > v[i + 1]) {
                Swap(&v[i], &v[i + 1]);
                swapped = true;
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

}
void DisplayValues(vector<int>v, int size) {
    for (int i = 0; i < size; i++) {
        cout << v[i] << " \t ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int size;
    int input;
    vector<int>v;
    cin >> size;
    while (size--) {
        cin >> input;
        v.push_back(input);
    } 

    BubbleSort(v, v.size());
  
    cout << "\n";
    return 0;
}
