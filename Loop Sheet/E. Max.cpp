#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)

int main() {
    /* ios_base::sync_with_stdio(false);*/

    int size;
    cin >> size;
    int* numbers = new int[size];

    for (int i = 0; i < size; i++) {
        cin >>numbers[i];
     }

    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] >= max)
            max = numbers[i];
    }
    cout << max << "\n";
   
    //system("Pause");
    return 0;
}