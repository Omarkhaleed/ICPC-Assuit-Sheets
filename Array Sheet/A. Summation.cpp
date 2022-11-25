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
   
    int size, input;
    ll sum = 0;
    cin >> size;
    while (size--) {
        cin >> input;
        sum += input;
    }
    cout << abs(sum) << "\n";

    return 0;
}