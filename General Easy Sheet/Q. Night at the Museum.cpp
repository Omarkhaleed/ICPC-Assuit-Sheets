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
    
    string s;
    cin >> s;
    char first = 'a';
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        int distanceOne = abs(s[i]-first);
        first = s[i];
        int distance2 = 26 - abs(distanceOne);
        if (distanceOne <= distance2)
            sum += distanceOne;
        else
            sum += distance2;
       
    }
    cout << sum << "\n";
    return 0;
} 
 
