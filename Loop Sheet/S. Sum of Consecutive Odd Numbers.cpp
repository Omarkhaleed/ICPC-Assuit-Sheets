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
      
        while (n--) {         
            int sum = 0;
            int num1, num2;
            cin >> num1 >> num2;
            for (int i = min(num1, num2) + 1; i < max(num1, num2); i++) {
                if (i % 2 != 0)
                    sum += i;

            }
            cout << sum << "\n";
      
    }
    //system("Pause");
    return 0;
}