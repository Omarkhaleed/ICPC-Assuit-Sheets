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
    
    string str1, str2;
    cin >> str1 >> str2;
    int count = 0;
    // the note here that the second string is always move step and compare by the first if equal the firts move
    // else stop
    for (int i = 0; i <= str2.size() - 1; i++) {
        if (str2[i] == str1[count])
            count++;
    }
    cout << count+1 << "\n";
      
  //system("Pause");
    return 0;
}

 
