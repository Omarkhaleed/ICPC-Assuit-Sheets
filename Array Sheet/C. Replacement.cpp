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
//int LinearSearch(vector<ll>v, int n, ll x)
//{
//   
//    for (int i = 0; i < n; i++) {
//        if (v[i] == x)
//            return i;
//    }
//    return -1;
//}
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
   
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 0)
            v[i] = 1;
        else if (v[i] < 0)
            v[i] = 2;
        else
            v[i] = 0;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
