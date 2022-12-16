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

	string word;
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == 'E' && word[i + 1] == 'G' && word[i + 2] == 'Y') {
			cout <<" ";
			i += 4;
		}
		else
			cout << word[i];
		
	}
	return 0;
}
