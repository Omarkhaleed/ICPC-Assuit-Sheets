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
    vector<int>vec;
    int n, m;
    cin >> n >> m;
    int size = n * m;
    int input;
    for (int i = 0; i < size; i++) {
        cin >> input;
        vec.push_back(input);
    }
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == x)
            count++;
    }
        if (count>0)
            cout << "will not take number" << "\n";
        else
            cout << "will take number" << "\n";

    return 0;
}
