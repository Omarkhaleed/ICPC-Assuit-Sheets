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
    
    int size, count = 0;
    cin >> size;
    vector<int>v(size);
    while (size--) {
        int input;
        cin >> input;
        v[input - 1] = ++count;

    }
    for (int i : v) {
        cout << i << " ";
    }
   
      
  //system("Pause");
    return 0;
}

 
