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
      if (x == int(x))
          cout << "int " <<int(x) << "\n";
      else
          cout << "float " <<int(x)<<" "<< x - int(x) << "\n";

    //system("Pause");
    return 0;	
}