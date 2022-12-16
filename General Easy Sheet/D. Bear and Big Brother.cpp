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
   
   
    int a, b;
    cin >> a >> b;
    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    cout <<years << "\n";
      
        
   
   
  //system("Pause");
    return 0;
}

 
