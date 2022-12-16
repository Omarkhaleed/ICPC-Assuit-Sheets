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
	int max = 0,s,count=0, sum = 0;
	int size, input1,input2;
	bool flag=0;
	cin >> size;
	while (size--) {
		cin >> input1 >> input2;
		if (input1 != input2) {
			flag = 1;
			break;
		}
		if (input1 == input2) {
			sum = input1 + input2;
			if (sum > max) {
				flag = 0;
				if(max!=0)
				count++;
				
			}
			else {
				flag = 0;
				s = 3;
				
			}
			max = sum;
			
		}

	}
	if (flag) {
     cout << "rated" << "\n";
	}
	else if( count )
		cout << "unrated" << "\n";
	else
		cout << "maybe" << "\n";
    return 0;
} 
 
