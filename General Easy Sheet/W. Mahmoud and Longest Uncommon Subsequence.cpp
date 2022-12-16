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

    string s1, s2;
    cin >> s1>>s2;
    if (s1.size() != s2.size())
        cout << max(s1.size(), s2.size()) << endl;
    else if (s1 == s2)
        cout << -1 << endl;
    else
        cout << s1.size() << endl;
        /*int count1 = 0, count2 = 0;
        int best1 = 0, best2 = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i + 1] >= s1[i]) {
                count1++;
            }
            best1 = max(count1, best1);
        }
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i + 1] >= s2[i]) {
                count2++;
            }
            best2 = max(count2, best2);
        }
        if (best1 == 0 && best2 == 0)
            cout << -1 << "\n";
        else
        cout << max(best1 + 1, best2 + 1) << "\n";
    */

    
    return 0;
} 
 
