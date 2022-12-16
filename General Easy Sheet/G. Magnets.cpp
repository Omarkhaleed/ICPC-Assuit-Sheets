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
    
    vector<string>v;
    int size;
    cin >> size;
    while (size--) {
        string num;
        cin >> num;
        v.push_back(num);
    }
    int count = 0;
    if (v.size() == 1)
        cout << 1 << "\n";
    else {
        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1)
                break;
            if (v[i] == v[i + 1] && i == v.size() - 2) {
                count++;
            }
            if (v[i] != v[i + 1] && i == v.size() - 2) {
                count++;
            }
            if (v[i] == v[i + 1]) {
                continue;
            }

            count++;

        }
        cout << count << "\n";
    }
    
    return 0;
} 
 
