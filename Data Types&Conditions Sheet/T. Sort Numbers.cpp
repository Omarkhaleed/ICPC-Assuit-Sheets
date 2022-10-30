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
         
      int a, b, c;
      cin >> a >> b >> c;
      vector<int>v = {a,b,c};
      vector<int>v2 = v;
      sort(v.begin(), v.end());
      for (int i = 0; i < v.size(); i++) {
          cout << v[i] << "\n";
      }
      cout << "\n";
      for (int i = 0; i < v2.size(); i++) {
          cout << v2[i] << "\n";
      }

    //system("Pause");
    return 0;	
}