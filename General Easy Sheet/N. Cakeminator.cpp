#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

int main(){
    
    
    int rows, columns;
    cin >> rows >> columns;
    int size = rows * columns;
   /* string **cake=new string[rows][columns];*/
    char cake[10][10];
    int count1 = 0,count2=0;
    for (int i = 0; i <rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> cake[i][j];
        }
     }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (cake[i][j] == 'S') {
                count1++;
                break;
            }
        }
        
    }
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            if (cake[j][i] == 'S') {
                count2++;
                break;
            }
        }

    }
    
    cout << size - (count1*count2) << "\n";
    
    return 0;
}
