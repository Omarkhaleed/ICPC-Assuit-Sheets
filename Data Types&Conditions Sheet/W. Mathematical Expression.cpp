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
       
      int x, y,z;
      char s,q; 
      cin >> x >> s >> y >> q>>z;
      int sum = x + y;
      int sub = x - y;
      int multi = x * y;
      if (s == '+') {
          if (x + y == z)
              cout << "Yes";
          else
              cout << sum;
      }

      else if (s == '-') {
          if (x - y == z)
              cout << "Yes";
          else
              cout << sub;
      }
      else {
          if (x * y == z)
              cout << "Yes";
          else
              cout << multi;
      }

    //system("Pause");
    return 0;	
}