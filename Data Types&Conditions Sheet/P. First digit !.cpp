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
        

      int x;
      cin >> x;
      string result =( x / 1000) % 2 == 0 ? "EVEN" : "ODD";
      cout << result << "\n";
    //system("Pause");
    return 0;	
}