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

    int n;
    cin >> n;
    int stars = 1;
    for (int i = 0; i < n; i++) {
        for (int x = n - 1; x > i; x--) {
            cout << " ";
        }
            for (int j = 0; j < stars; j++) {
                cout << "*";
            }
            stars += 2;
            cout << "\n";      

    }
    //system("Pause");
    return 0;
}