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
   
   
        string s;
        cin >> s;
        int length = s.size() - 1;
        for (int i =0; i <=length; i++) {
            if (s[i] == '?')
                s[i] =s[length-i] ;
            if (s[i] == '?')
                s[i] = 'a';
        }
       
        string s2 = s;
        reverse(s.begin(), s.end());
        if (s2 == s)
            cout << s2 << "\n";
        else
            cout << -1 << "\n";
        
   
   
  //system("Pause");
    return 0;
}

 