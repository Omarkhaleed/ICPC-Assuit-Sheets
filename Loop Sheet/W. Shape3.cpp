#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
int main()
{
  
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
    // when space =1 and i=1 this mean after final line which has 7 points we should have 5 points
    // but in this problem he needs to repeat the final line the we decrease the nums of stars so we should
    // set space =0 and i=0;
    int space =0;
    for (int i = 0; i <n; i++)
        {
            for (int x = 1; x <= space; x++)
                cout << " ";
            space++;
            for (int j = 1; j <= (2 * (n - i) - 1); j++)
                cout << "*";
            cout << endl;
        }
  
   
  //system("Pause");
    return 0;
}

 