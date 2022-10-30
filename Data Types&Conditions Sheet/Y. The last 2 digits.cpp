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
      

      
       //32�27=864
       // 1232�227 = 279664
       // As you can see the last two digits are the same, so this will be a simple formula for it:

      long long a, b, c, d;
      cin >> a >> b >> c >> d;
      int multi = (a % 100 * b % 100 * c % 100 * d % 100) % 100;
      if (multi == 0 || multi<10)
          cout << 0 << multi << "\n";
      else
          cout << multi << "\n";



    //system("Pause");
    return 0;	
}