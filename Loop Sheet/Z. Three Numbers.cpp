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

    int k, s;
    cin >> k >> s;
    int count = 0;
    for (int i = 0; i <= k; i++) {
        for (int j= 0; j <= k; j++) {
            int x = i;
            int y =  j;
            int z = (s - (i+j));
            if (z>=0 && z<=k)
                count++;
        }
    }
    cout <<count << "\n";

    return 0;
}
 