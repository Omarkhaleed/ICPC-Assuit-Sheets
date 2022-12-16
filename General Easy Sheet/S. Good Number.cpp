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
    cin >> size;
    int k;
    cin >> k;

    int  count = 0;
    while (size--) {
        bool flag= 1;
        string input;
        cin >> input;
        for (int i = 0; i <=k; i++) {
            int ch = input.find(to_string(i));
            if (ch != -1)
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }
        if (flag)
            count++;
    }
    cout << count<< "\n";
    return 0;
} 
 
