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

      double a, b;
      cin >> a >> b;
      double result = a / b;
      cout <<"floor "<<a<<" / "<<b<<" = "<< floor(result) << "\n";
      cout <<"ceil " <<a<< " / " << b << " = " << ceil(result) << "\n";
      cout <<"round " <<a<< " / " << b << " = " << round(result) << "\n";
      
    //system("Pause");
    return 0;	
}