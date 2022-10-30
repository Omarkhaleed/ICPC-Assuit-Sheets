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

      int a, b;
      cin >> a >> b;
      if (a %b==0 || b%a==0)
          cout << "Multiples" << "\n";
      else
          cout << "No Multiples" << "\n";
      
    //system("Pause");
    return 0;	
}