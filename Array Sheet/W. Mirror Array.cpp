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


	vector<vector<int>>vec;
	int n, m;
	cin >> n >> m;
	int input;
	for (int i = 0; i < n; i++) {
		vector<int> v1;
		for (int j = 0; j < m; j++) {
			cin >> input;
			v1.push_back(input);
		}
		for (int z = v1.size() - 1; z >= 0; z--) {

			cout << v1[z] << " ";
		}
		cout << "\n";
	}
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			cout << vec[i][j] << " ";
		}
	}*/
	return 0;
}
