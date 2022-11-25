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

		char numbers[101][101];
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> numbers[i][j];
			}
		}
		int x, y;
		cin >> x >> y;
		
		if (numbers[x][y + 1] != '.' &&
			numbers[x][y - 1] != '.' &&
			numbers[x - 1][y - 1] != '.' &&
			numbers[x - 1][y] != '.' &&
			numbers[x - 1][y + 1] != '.' &&
			numbers[x + 1][y] != '.' &&
			numbers[x + 1][y - 1] != '.' &&
			numbers[x + 1][y + 1] != '.')
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
         
    return 0;
}
