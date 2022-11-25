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

	//  my first solution 
   // vector<int>v;
   // vector<int>vect;
   // int n, limit;
   // cin >> n >> limit;


   // int input;
   // for (int i = 0; i < n; i++) {
   //     cin >> input;
   //     v.push_back(input);
   // }
   // sort(v.begin(), v.end());
   // v.push_back(0);
   // int count = 0;
   // for (int i = 0; i < v.size() - 1; i++) {
   //    
   //         if (v[i] == v[i + 1])
   //             count++;
   //         else {
   //             count++;
   //             vect.push_back(count);
   //             count = 0;
   //         }
   // }
   //     
   //// 1 1 2 2 3 3 3 4 5 5 0

   // for (int i = 0; i < vect.size(); i++) {
   //     cout << vect[i] << "\n";
   // }


	// my second solution 



	int size, counter;
	cin >> size >> counter;
	ll arr[1000001] = { 0 };
	for (int i = 0; i < size; i++) {
		int num;
		cin >> num;
		if (arr[num] == 0) {
			arr[num] = 1;
		}
		else {
			arr[num] = arr[num] + 1;
		}
	}
	for (int i = 1; i <= counter; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
