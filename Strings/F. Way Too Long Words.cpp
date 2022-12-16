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
	int size;
	cin >>size;
	string s1;
	while (size--) {
		cin >> s1;
		if (s1.size() > 10)
			cout << s1[0] << (s1.size() - 2) << s1[s1.size() - 1] << "\n";
		else
			cout << s1 << "\n";

	}
	


	return 0;
}
