#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
bool isprime(int n) {
    int d = 2;
    int root = sqrt(n);
    while (d <= root) {
        if (n % d == 0) {
            return false;
        }
        d++;
    }
    return true;
}
int main(){

    int number;
    cin >> number;
    for (int i = 2; i <= number; i++) {
        if (isprime(i))
            cout << i << " ";
        }
    

    //system("Pause");
    return 0;
}