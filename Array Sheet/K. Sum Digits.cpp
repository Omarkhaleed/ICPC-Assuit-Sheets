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
    
    int size;
    string input;
    cin >> size;
    cin >> input;
    /*string ss = to_string(input);
    reverse(ss.begin(), ss.end());
    int newInput = stoi(ss);*/
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum+= int(input[i])-48;
       /* sum += stoi(input[i]);*/
    }
    cout << sum << "\n";
    return 0;
}
