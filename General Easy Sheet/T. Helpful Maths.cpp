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
    bool flag = 1;
    while (flag) {
        flag = 0;
        for (int i = 0; i < s.size() - 1; i += 2) {
            if (s[i] > s[i + 2]) {
                swap(s[i], s[i + 2]);
                flag = 1;
            }
        }
    }
    cout << s << "\n";
    return 0;
} 
 
