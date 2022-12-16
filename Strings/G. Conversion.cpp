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
	
	string s1;
	cin >> s1;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == ',')
			s1[i] = ' ';
		else if (s1[i] > 90)
			s1[i] = s1[i] - 32;
		else
			s1[i] = s1[i] +32;
		}
	cout << s1 << "\n";
	return 0;
}
