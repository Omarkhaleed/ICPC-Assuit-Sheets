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
    int size; int num; int one = 0, two = 0, three = 0;
    int array1[5000], array2[5000], array3[5000];
    cin >> size;
    while (size--)
    {   
        cin >> num;
        v.push_back(num);
       

    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
            array1[one] = i + 1;
            one++;
        }
        if (v[i] == 2) {
            array2[two] = i + 1;
            two++;
        }
        if (v[i] == 3) {
            array3[three] = i + 1;
            three++;
        }

    }
    int min3 = min({one,two,three});
    cout << min3 << "\n";
    for (int i = 0; i < min3; i++) {
        cout << array1[i] << " " << array2[i] << " " << array3[i] << "\n";
    }
 
    return 0;
} 
 
