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
      if (int(x) >= 65 && int(x) <= 90) {
          cout << "ALPHA" << "\n";
          cout << "IS CAPITAL" << "\n";
      }
      else if (int(x) >= 97 && int(x) <= 122) {
          cout << "ALPHA" << "\n";
          cout << "IS SMALL" << "\n";
      }
      else
          cout << "IS DIGIT" << "\n";

    //system("Pause");
    return 0;	
}