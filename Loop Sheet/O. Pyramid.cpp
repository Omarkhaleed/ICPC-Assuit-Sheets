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
      
  
    int  size;
    cin>>size;
   
    for (int i = 1; i <= size; i++){
        for (int j = 1; j <= i; j++)
            cout <<"*";
        cout << "\n";
    }
    //system("Pause");
    return 0;
}