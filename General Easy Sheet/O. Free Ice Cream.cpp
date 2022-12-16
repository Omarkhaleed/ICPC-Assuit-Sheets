#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#include <map>
#include<numeric>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    
    ll size, k; 
    ll count = 0;
    cin >> size >> k;;
    while (size--) {
        char x; int y;
        cin >> x >> y;
        if (x == '+')
            k += y;
        else
        {
            if (y > k)
                count++;
            else
                k -= y;
        }
        
    }
   
    cout << k << " " << count << "\n";
    
    return 0;
} 
 
