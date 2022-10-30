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
  
}
int main(){

    int number;
    cin >> number;
        
    string result = isprime(number) ? "YES" : "NO";
    cout << result << "\n";

    //system("Pause");
    return 0;
}