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
      

      int a, b, c, d;
      cin >> a >> b >> c >> d;
         
      // this should return  only point but the codeForces wants 2 points!!!!!
       /*else if(c==b)
           cout << c << "\n";*/
      if (c>=a &&  d<=b)
          cout << c << " " << d << "\n";
      else if  (c>=a && c<=b && d>b)
          cout << c << " " << b << "\n";
      else if (c<a && d <=b && d>=a)
          cout << a << " " << d << "\n";
      else if ( c<a && d>b)
          cout << a<< " " << b << "\n";
      else if (b==c && d>b)
          cout << b << " " << c << "\n";
      else if (d == a && c < a)
          cout << a << " " << d<< "\n";
      else
      cout << -1 << "\n";



    //system("Pause");
    return 0;	
}