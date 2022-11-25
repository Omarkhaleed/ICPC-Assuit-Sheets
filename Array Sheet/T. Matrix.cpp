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
    int numbers[100][100];
    int n;
    cin >> n;
    int input;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> numbers[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i <n; i++) {
        sum1 += numbers[i][i];
        sum2 += numbers[i][n - i - 1];
    }
    cout << abs(sum1 - sum2) << "\n";

    return 0;
}
