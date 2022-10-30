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

      string first, second;
      cin >> first >> second;
      string third, fourth;
      cin >> third >>fourth;
      if (second == fourth)
          cout << "ARE Brothers" << "\n";
      else
          cout << "NOT"<<"\n";

    //system("Pause");
    return 0;	
}