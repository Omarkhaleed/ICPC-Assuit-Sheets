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
	int count = 0;
	for (int i = 0; i < sen.size(); i++) {
		if ((sen[i] >='a' && sen[i] <='z') || (sen[i] >= 'A' && sen[i] <= 'Z')) {
			if(sen[i+1]==32 || sen[i+1]=='!' || sen[i + 1] ==',' || sen[i + 1] =='.' || sen[i + 1] =='?' || i == sen.size() - 1)
			count++;
		}
	}
	cout << count<< endl;

	return 0;
}
