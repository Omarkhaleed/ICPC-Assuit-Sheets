#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
long long mygcd(long long a, long long b) {
    if (b == 0)
        return a;
    return mygcd(b, a % b);

}

int main(){
      

    long long  a,b;
    cin >> a>>b;
        cout << mygcd(a,b)<< "\n";
    //system("Pause");
    return 0;
}