#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
int main() {

      // Note Here that he needs to check number if it could be evenly divided by some lucky number.
      // so i saved time and compare the number with the numbers in array if true break the loop
      // in the first problem i make check function to know any number he entered is lucky or no
    int  a;
    cin >> a; 
    int Lucky[12] = { 4,7,47,74,44,444,447,474,477,777,774,744 };
    bool flag = false;
    for (int i = 0; i < 12; i++) {
        if (a % Lucky[i] == 0) {
            flag = true;
            break;
        }
    }
    if (flag)
     cout << "YES" << "\n ";
    else
        cout << "NO" << "\n";
    return 0;
}

 
