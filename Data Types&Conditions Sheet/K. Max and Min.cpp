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

      int a, b,c;
      cin >> a >> b >>c;
      cout << min({ a, b, c }) << " " << max({ a, b, c }) << "\n";
      
    //system("Pause");
    return 0;	
}