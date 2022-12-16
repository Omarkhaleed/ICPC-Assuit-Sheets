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
	   
    int array[100];

   // // this code for encoding
   // vector<char>v;
   // int size;
   // cin >> size;
   // int size2 = (size/2);
   // string s;
   // cin >> s;
   // int last = s.size() - 1;
   // int first = 0;
   // while (size2--){
   //     v.push_back(s[last]);
   //     v.push_back(s[first]);
   //     last--;
   //     first++;
   // }
   // for (int i = v.size() - 1; i >= 0; i--) {
   //     cout << v[i];
   //}





    // // this code for Decoding

    vector<char>v;
    int size;
    cin >> size;
    
    string s;
    cin >> s;
   
   
    if (size % 2 != 0) {
        for (int i = s.size() - 1; i >= 0; i--) {
            if (i % 2 != 0)
                v.push_back(s[i]);
        }
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0)
                v.push_back(s[i]);
        }
    }
    else
    {
        for (int i = s.size() - 1; i >= 0; i--) {
            if (i % 2 == 0)
                v.push_back(s[i]);
        }
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 != 0)
                v.push_back(s[i]);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
} 
 
