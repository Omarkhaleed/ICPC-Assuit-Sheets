#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#include <map>
#include<numeric>
#define  ll long long

using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	vector<int>vec1;
	vector<int>vec2;
	int size1, size2;
	cin >> size1 >> size2;
	int size11 = size1;
	int size22 = size2;
	int input1;
	while (size1--) {
		cin >> input1;
		vec1.push_back(input1);
	}
	int input2;
	while (size2--) {
		cin >> input2;
		vec2.push_back(input2);
	}
	int x = 0,count=0;
	for (int i = 0; i < size11; i++) {
		if (vec1[i] == vec2[x]) {
			count++;
			x++;
		}
	}
	/*  7 4
		1 8 4 7 5 2 7
		4 5 7 2*/

	if (count == size22)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return 0;
}
