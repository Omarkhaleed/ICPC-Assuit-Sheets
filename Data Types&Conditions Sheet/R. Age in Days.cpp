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
        

      int days;
      cin >> days;
      int year = days / 365;
      int month = (days - (year * 365)) / 30;
      int day = (days - (year * 365)) - (month * 30);
      cout << year << " years" << "\n";
      cout << month << " months" << "\n";
      cout << day << " days" << "\n";

    //system("Pause");
    return 0;	
}