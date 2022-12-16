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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y;
    cin >> x >> y;
    vector<int>v;
    vector<int>v2;

    while (x--) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    while (y--) {
        int input;
        cin >> input;
        v2.push_back(input);
    }
   
    ll sum1 = accumulate(v.begin(), v.end(), 0);
    ll sum2 = accumulate(v2.begin(), v2.end(), 0);
    
   
    if (sum1==sum2)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
    
    return 0;
} 
 
