#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
// note  if we enter 11 when 1 us reminder the program log out we should look to the final sum
bool check(int i, int a ,int b) {
    int sum = 0;
    while (i) {
        int rem = i % 10;
        sum += rem; 
        i /= 10;
    }
    if (sum >= a && sum <= b)
        return true;
    else
        return false;
}
int main() {


    int n,a,b;
    cin >> n>>a>>b;
    int sum = 0;
    for(int i=a ;i<=n;i++){
        if (check(i , a , b))
            sum += i;        
    }
    cout << sum << "\n";
    //system("Pause");
    return 0;
}