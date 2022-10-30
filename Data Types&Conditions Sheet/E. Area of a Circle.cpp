#include<iostream>
#include<iomanip>
#include <vector>
#include<cmath>
#include<cstdio>
#include <string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
  int main(){
	 /* ios_base::sync_with_stdio(false);*/
	   
      double pi = 3.141592653;

      double r;
      cin >> r;
      cout << fixed << setprecision(9);
      cout << pi * (r * r) <<"\n";

     
    //system("Pause");
    return 0;	
}