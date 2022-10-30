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

int main() {


    int n;
    cin >> n;
   
        for (int j = 1;j<=n*4; j++) {
            if (j % 4 == 0) {
                cout << "PUM" << "\n";
                continue;
            }
            cout << j << " ";
        }

    //system("Pause");
    return 0;
}