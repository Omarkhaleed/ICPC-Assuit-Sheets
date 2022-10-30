#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
void isPalindrome(int x) {
    int rev = 0, num;
    int s = x;
    while (x != 0) {
        num = x % 10;
        rev = (rev * 10) + num;
        x /= 10;
    }
   
    if (rev != s || s < 0) {
        cout << rev << "\n";
        cout << "NO" << "\n";
    }
    else {
        cout << rev << "\n";
        cout << "YES" << "\n";
        
    }
}
int main(){
      

    int n;
    cin >> n;
    isPalindrome(n);


    //system("Pause");
    return 0;
}