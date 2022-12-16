#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#include <map>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int police = 0, crime = 0, crime2 = 0;
    int size; int count=0;
    cin >> size;
    while (size--) {
        int input;
        cin >> input;
        if (input > 0) {
            police += input;
        }
        else
        {
            if (police == 0) 
                count++;
            else 
                police--;
        }
    }
    cout << count << "\n";
    return 0;
} 
 
