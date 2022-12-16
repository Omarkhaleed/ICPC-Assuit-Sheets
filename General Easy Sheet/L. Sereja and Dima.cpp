#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
#define  ll long long
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

int main(){
  

    int size;
    cin >>size;
    vector<int>v;
    while (size--) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    int sereja = 0, dima = 0;
    int len = v.size() - 1;
    while (len >= 0) {
        if (len == 0) {
            sereja += v[len];
        }
        else {
            if (v[len] > v[0]) {
                sereja += v[len];
                v.pop_back();
            }
            else {
                sereja += v[0];
                v.erase(v.begin());
            }
        }
        len--;
        if (len < 0)
            break;
        if (len == 0) {
            dima += v[len];
        }
        else {
            if (v[len] > v[0]) {
                dima += v[len];
                v.pop_back();
            }
            else {
                dima += v[0];
                v.erase(v.begin());
            }
        }
        len--;
    }
    
    cout << sereja << " " << dima << "\n";
    
    return 0;
}
