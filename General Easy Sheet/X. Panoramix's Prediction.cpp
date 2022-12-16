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

bool Isprime(int n) {
    if (n < 2)
        return false;
    int d = 2;
    int root = sqrt(n);
    while (d <= root) {
        if (n % d == 0) {
            return false;
        }
        d++;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
        int n, m; bool flag = 0;
        cin >> n >> m;
        if (n == m || m < n)
            cout << "NO" << "\n";
        else if (n == 2 && m == 3)
            cout << "YES" << "\n";
        else if (Isprime(m)) {
            while (!flag) {

                if (Isprime(m - 2) && (m - 2) == n) {
                    flag = 1;
                    cout << "YES" << "\n";
                }
                else if (Isprime(m - 2) && (m - 2) != n) {
                    flag = 1;
                    cout << "NO" << "\n";
                }
                else {
                    m -= 2;
                }

            }
        }
        else
            cout << "NO" << "\n";

    return 0;
} 
 
