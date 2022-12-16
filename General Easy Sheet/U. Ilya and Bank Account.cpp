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
   
    
        int x;
        cin >> x;   
        if (x >= 0)
            cout << x << "\n";
        else {

            int first = x / 10;
            int second = (x / 100) * 10 + x % 10;
            if (first > second) {

                cout << first << "\n";
            }
            else
                cout << second << "\n";
        }
    return 0;
} 
 
