#include<iostream>
#include<iomanip>
#include <vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include <string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

  int main(){
	 /* ios_base::sync_with_stdio(false);*/
        

      float x, y;
      cin >> x >> y;
        
      string result = (x > 0 && y > 0) ? "Q1" : (x < 0 && y > 0) ? "Q2" : (x < 0 && y < 0) ? "Q3" : (x > 0 && y < 0) ? "Q4" :((x > 0 || x<0) &&  y == 0)?"Eixo X":((y > 0 || y < 0) && x==0) ?"Eixo Y" :"Origem";
      cout << result;
    //system("Pause");
    return 0;	
}