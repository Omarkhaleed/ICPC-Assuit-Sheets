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
ll fib(int n) {
    // Space code
    if (n <= 1)
        return 0;
   ll num1 = 0, num2 = 1, sum = 0;
    ll nn = n-1;
    for (ll i = 1; i < nn; i++) {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return num2;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int input;
    cin >> input;
    
    cout <<fib(input)<< "\n";
    return 0;
}
