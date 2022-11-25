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
void GetArrays(vector<int>v) {
        
        int best = 0, sum = 0;
        for (int k = 0; k < v.size(); k++) {
            sum = max(v[k], sum + v[k]);
            best = max(best, sum);
        }
        cout << best << "\n";
      
         cout << endl;
           /* cout << *max_element(vect.begin(), vect.end())<<" ";*/
           
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int size;
    cin >> size;
    int input1, input2;
    ll sum1 = 0, multi1 = 0, sum2 = 0, multi2 = 0;
    for (int i = 0; i < size; i++) {
        cin >> input1;
        sum1 += input1;
        multi1 *= input1;
    }
    for (int i = 0; i < size; i++) {
        cin >> input2;
        sum2 += input2;
        multi2 *= input2;
    }
    if ((sum1 == sum2) && (multi1 == multi2))
        cout << "yes";
    else
        cout << "no";
        
    return 0;
}
