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
    /* ios_base::sync_with_stdio(false);*/

    int num;
    cin >> num;

    for (int i = 1; i <= 12; i++) {
        cout << num << " * " << i << " = " << num * i << "\n";
     }

   
    //system("Pause");
    return 0;
}