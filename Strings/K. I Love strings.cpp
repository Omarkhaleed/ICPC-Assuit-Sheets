#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<string.h>
#include <cstring>
#include<algorithm>
#include<cstdio>
#include<string>
#include <map>
#include<numeric>
#include <set>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	
	int testCases;
	cin >> testCases;
	string s,t;
	while (testCases--) {
		cin >> s >> t;
		int length = s.size()+t.size();
		int flag1 = 1, flag2 = 1;
		for (int i = 0; i < length; i++) { // i = 3
			if (s.size() != i && flag1) {   // 2
				cout << s[i];
			}
			else {
				flag1 = 0;
			}
			if (t.size() != i && flag2) { // 4
				cout << t[i];
			}
			else {
				flag2 = 0;
			}
		}
		cout << endl;
	}
  
	return 0;
}
