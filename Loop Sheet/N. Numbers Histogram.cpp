#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)


int main(){
      
  
    char s; int  size;
    cin>>s>> size;
    int* numbers = new int[size];
    for (int i = 0; i < size; i++)
        cin >> numbers[i];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < numbers[i]; j++)
            cout << s;
        cout << "\n";
    }
    //system("Pause");
    return 0;
}