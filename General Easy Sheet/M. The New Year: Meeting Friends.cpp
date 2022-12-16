#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

int main(){

    int a, b, c;
    cin >> a >> b >> c;
    vector<int>v = {a,b,c};
    int sum1 = abs(v[0] - v[1]) + abs(v[0] - v[2]);
    int sum2 = abs(v[1] - v[0]) + abs(v[1] - v[2]);
    int sum3 = abs(v[2] - v[0]) + abs(v[2] - v[1]);
    cout << min({ sum1,sum2,sum3 }) << "\n";

    return 0;
}
