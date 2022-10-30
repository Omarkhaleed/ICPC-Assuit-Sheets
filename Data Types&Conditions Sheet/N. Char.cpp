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

      char x;
      cin >> x;
      if (int(x) >= 65 && int(x) <= 90) 
          cout<<char(x+32)<< "\n";  
      else
          cout <<char(x-32)<< "\n";

    //system("Pause");
    return 0;	
}