#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
int main()
{
   
    int room;
    cin >> room;
    int count = 0;
    while (room--) {
        int a, b;
        cin >> a >> b;
        if ((b-a)>=2)
            count++;
    }
    
    cout <<count << "\n";
      
       
   
  //system("Pause");
    return 0;
}

 
