#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)


void FibonacciNumbers(int n)
{
    int num1 = 0, num2 = 1;
    if (n < 1)
        return;
    cout << num1 << " ";
    for (int i = 1; i < n; i++) {
        cout << num2 << " ";
        int sum = num1 + num2;
        num1 = num2;
        num2 = sum;  
    }
}

int main()
{
    int n;
    cin >> n; 
    FibonacciNumbers(n);
    return 0;
  //system("Pause");
    return 0;
}