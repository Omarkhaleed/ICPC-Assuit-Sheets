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
         

      int n;
      cin >> n;
      if (n < 2)
          cout << -1 << "\n";
      else {
          for (int i = 2; i <= n; i += 2) {
              cout << i << "\n";
          }
      }



    //system("Pause");
    return 0;	
}