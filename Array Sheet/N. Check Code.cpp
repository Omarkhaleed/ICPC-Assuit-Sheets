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
    
    int a, b;
    cin >> a;
    cin >> b;
    string code;
    cin >> code;
    int size = code.size();
    int count = 0;
    if (size == (a + b + 1)) {
        
        if (code[a] == '-') {
            for (int i = 0; i < code.size(); i++) {
                if (code[i] == '-')
                    count++;
               /* if(code[i]!='-' && code[i]<code[a] || code[i] != '-'  && code[i] > code[a])*/
          }
            if (count > 1)
                cout << "No" << "\n";
            else
                cout << "Yes" << "\n";
        }
          
        else
            cout << "No" << "\n";
    }
    else
    cout << "No"<< "\n";
    return 0;
}
