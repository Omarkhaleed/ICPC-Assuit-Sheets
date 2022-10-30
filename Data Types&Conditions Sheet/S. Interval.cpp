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
        

      double x;
      cin >> x;
        
      string result = (x >= 0 && x <= 25) ? "Interval [0,25]" : (x > 25 && x<=50 ) ? "Interval (25,50]" : (x > 50 && x <= 75) ? "Interval (50,75]" : (x > 75 && x <= 100) ? "Interval (75,100]" :"Out of Intervals";
      cout << result;
    //system("Pause");
    return 0;	
}