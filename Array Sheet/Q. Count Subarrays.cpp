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
int GetArrays(vector<int>v) {
    // if current> previos add 2 for the number and the subarray from it and previos
    // else  we add only one for the number only
        int count = 0, individual, previous;
        for (int i = 0; i < v.size(); i++) {
            if (i == 0)
                individual = 1;
            else {
                if (v[i] >= previous)
                    individual++;
                else
                    individual = 1;
            }
            count += individual;
            previous = v[i];

        }

        return count;
    
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>v;  
    int test;
    cin>>test;
    int size, input;
   
    while (test--) {
        cin >> size;
        while (size--) {
            cin >> input;
            v.push_back(input);
        }
        cout << GetArrays(v) << "\n";
        v.clear();
    }
        
    return 0;
}
