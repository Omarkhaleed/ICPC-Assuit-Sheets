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

      long long  a, b, c, d;
      cin >> a >> b >> c >> d;
      /*if (b == d && a > c || b>d && a==c)
          cout << "YES" << "\n";*/
      
       if (b*log(a) > d*log(c))
          cout << "YES" << "\n";
      else
          cout << "NO" << "\n";
      



    //system("Pause");
    return 0;	
}