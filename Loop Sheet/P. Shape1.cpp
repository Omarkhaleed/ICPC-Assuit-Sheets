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
   
    for (int i = size; i >= 1; i--){
        for (int j = i; j >= 1; j--)
            cout <<"*";
        cout << "\n";
    }
    //system("Pause");
    return 0;
}