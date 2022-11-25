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
    
    int size;
    int input;
    vector<int>v;
    cin >> size;
        while (size--) {
            cin >> input;
            v.push_back(input);     
    }
        int count = 0;
    int min=*min_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == min)
            count++;
    }
    if (count % 2 != 0)
        cout << "Lucky"<<"\n";
    else
        cout << "Unlucky"<<"\n";
    return 0;
}
