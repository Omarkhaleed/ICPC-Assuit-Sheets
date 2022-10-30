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

    int num1, num2;
    while (cin >> num1>>num2){
        int sum = 0;
        if (num1<=0 || num2<=0)
            break;
        for (int i = min(num1, num2); i <= max(num1, num2); i++) {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << "\n";
   
    }
    //system("Pause");
    return 0;
}s