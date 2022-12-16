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
    
    int rows, columns;
    cin >> rows >> columns;
    int count = 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i % 2 == 0) {
                if ((j == columns && count % 2 == 0) || (j == 1 && count % 2 != 0)) {
                    cout << "#";
                    
                }
                else
                    cout << ".";
               
            }
            else {
                cout << "#";
               
            }
            
        }
        if (i % 2 == 0)
            count++;
       
        cout << "\n";
      }
   
      
  //system("Pause");
    return 0;
}

 
