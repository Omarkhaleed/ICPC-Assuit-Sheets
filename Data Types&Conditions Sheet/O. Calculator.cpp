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

      int a, b; char s;
      cin >>a>>s>>b;
     /* if (s=='+') 
          cout<<(a+b)<< "\n";  
      else if(s== '-')
          cout <<a-b<< "\n";
      else if (s== '*')
          cout << a * b << "\n";
      else
          cout << a / b << "\n";*/

      int result = (s == '+') ? a+b : (s == '-') ? a - b : (s == '*') ? a * b : a / b;
      cout << result;
    //system("Pause");
    return 0;	
}