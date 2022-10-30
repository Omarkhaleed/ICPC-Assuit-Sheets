#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
bool check(int i) {
    bool flag = true;
    while (i != 0) {
        int rem = i % 10;
        if (rem == 4 || rem == 7)
            i /= 10;
        else {
            flag = false;
            break;
        }
       /* i /= 10;*/
    }
    return flag;
  
 }

int main(){
      
  
    int  a,b;
    cin >> a>>b;
    int count = 0;
    for (int i = a; i <= b; i++) {     
        if (check(i)) {
            count++;
            cout << i << " ";
       }
        
    }
    if (count == 0)
        cout << -1<<"\n";
        
    //system("Pause");
    return 0;
}