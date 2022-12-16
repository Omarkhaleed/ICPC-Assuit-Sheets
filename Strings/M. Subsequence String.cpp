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

	string s; 
	cin >> s;

	string myString = "hello";
	int i = 0; 
	int x = 0;
	while (true) {
		if (i ==s.size() || x == myString.size()) {
			break;
		}
		if (s[i] == myString[x]) {
			x++; 
		}
		i++;
	}
	if (x == 5)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

	return 0;
}
