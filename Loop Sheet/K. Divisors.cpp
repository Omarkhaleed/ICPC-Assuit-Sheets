#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

int main(){
      

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << "\n";
        continue;
    }


    //system("Pause");
    return 0;
}