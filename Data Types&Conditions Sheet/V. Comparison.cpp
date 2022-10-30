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

	int x, y; 
	char s;    //  5 > 4
	cin >> x >> s >> y;

	if (x > y && s == '>' || x < y && s == '<' || x == y && s == '=')
		cout << "Right" << "\n";
	else
		cout << "Wrong" << "\n";

	

	return 0;
}