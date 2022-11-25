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

    vector<int>v;
    int size, input;
    cin >> size;
    int count = 0;
    while (size--) {
        cin >> input;
        if (input % 2 != 0) {
            count++;           
        }
        v.push_back(input);
    }
    int count2 = 0;
    bool flag = true;
    if (count > 0)
        cout << 0 <<"\n";
    else {
        while (flag) {
            for (int i = 0; i < v.size(); i++) {
                v[i] = v[i] / 2;
                if (v[i] % 2 != 0 || v[i] == 1) {
                    flag = false;
                    break;
                }
            }
            count2++;

        }
        cout << count2 << "\n";
    }
        
    return 0;
}
