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

	int e = 0, g = 0, y = 0, p = 0, t = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'e' || s[i] == 'E')
			e++;
		else if (s[i] == 'g' || s[i] == 'G')
			g++;
		else if (s[i] == 'y' || s[i] == 'Y')
			y++;
		else if (s[i] == 'p' || s[i] == 'P')
			p++;
		else if (s[i] == 't' || s[i] == 'T')
			t++;
		else
			continue;
	}
	cout << min({e, g, y, p, t}) << endl;
	return 0;
}
