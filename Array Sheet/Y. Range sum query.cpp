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
	// first code  take time limit exceeded
	/*ll sum = 0;
	ll size,Q;
	cin >> size >> Q;

	vector<ll>vec;
	ll input;
	while (size--) {
		cin >> input;
		vec.push_back(input);
	}
	ll l, r;
	while (Q--) {
		cin >> l >> r;
		for (int i = l-1; i <= r-1; i++) {
			sum += vec[i];			
		}
		cout << sum << "\n";
		sum = 0;
	}*/
	

	// second solution take O(n)  with prefix sum


long long size, q;
	cin >> size >> q; 
	long long array1[size];
	long long array2[size];  
	for (int i = 0; i < size; i++) {
		cin >> array1[i];
		if (i == 0) 
			array2[i] = array1[i];
		else 
			array2[i] = array1[i] + array2[i - 1];
		
	}
	long long l, r;
	while (q--) { 
		
		cin >> l >> r;
		l--;
		r--;
		long long sum = array2[r] - array2[l] + array1[l];
		cout << sum << endl;
	}
	return 0;
}
