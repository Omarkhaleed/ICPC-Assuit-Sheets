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
void GetArrays(vector<int>v) {
    vector<int>vect;
    int max_num=0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            vect.clear();
            for (int k = i; k <= j; k++) {
                vect.push_back(v[k]);
            }
            cout << *max_element(vect.begin(), vect.end())<<" ";
            
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>v;  
    int test;
    cin>>test;
    int size, input;
   
    while (test--) {
        cin >> size;
        while (size--) {
            cin >> input;
            v.push_back(input);
        }
        GetArrays(v);
        cout << "\n";
        v.clear();
    }
        
    return 0;
}
