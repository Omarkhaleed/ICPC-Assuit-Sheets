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

	//for (int i = 0; i <= 5; i++) {
	
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << s1 << "\n";
	else {
		int length = max(s1.size(), s2.size());
		for (int i = 0; i < length; i++) {
			if (s1[i] < s2[i]) {
				cout << s1 << "\n";
				break;
			}
			else if (s2[i] < s1[i])
			{
				cout << s2 << "\n";
				break;
			}
			else
				continue;
		}
	}
	//}

	return 0;
}
