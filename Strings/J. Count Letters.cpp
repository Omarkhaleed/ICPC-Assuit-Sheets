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
	vector<pair<char, int>>vec1;
	int count = 0;
	sort(s1.begin(), s1.end());
	for(int i=0;i<s1.size();i++){
		if (s1[i] == s1[i + 1])
			count++;
		else {
			cout <<s1[i]<< " : " << count+1<< "\n";
			//vec1.push_back(make_pair(s1[i],count+1));
			count = 0;
		}
		
	}
	// this way give me MLE
	/*sort(vec1.begin(), vec1.end());
	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i].first << " : " << vec1[i].second << "\n";
	}*/
	return 0;
}
