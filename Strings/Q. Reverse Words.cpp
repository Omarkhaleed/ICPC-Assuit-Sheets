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

	string sen; 
	getline(cin, sen);
	sen += " ";
	vector<char>vec;
	for (int i = 0; i < sen.size(); i++) {
		if (sen[i] != ' ') {
			vec.push_back(sen[i]);
		}
		else {
			for (int i = vec.size() - 1; i >= 0; i--)
				cout << vec[i];
			if (i != sen.size() - 1)
			cout << " ";
			vec.clear();
		}
	}
	

	return 0;
}
