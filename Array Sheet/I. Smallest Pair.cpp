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
void MinSum(vector<int>v) {
    vector<int>min;
    int sum = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            sum = v[i] + v[j] + (j + 1) - (i + 1);
            min.push_back(sum);
        }
    }

    cout << *min_element(min.begin(), min.end()) << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    int size;
    int input;
    vector<int>v;
   
   
    while (test--) {
        cin >> size;
        while (size--) {
            cin >> input;
            v.push_back(input);
        }
        MinSum(v);
        v.clear();
    }
  
    return 0;
}
