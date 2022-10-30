#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
long long  fact(int num) {
    long long factorial = 1;
    for (int i = 2; i <= num; i++)
        factorial *= i;
    return(factorial);
 }
int main() {
    /* ios_base::sync_with_stdio(false);*/

    int size;
    cin >> size;

    int* numbers = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
     
    }

    for (int i = 0; i < size; i++) {
       
        cout << fact(numbers[i])<<"\n";
    }

   
    //system("Pause");
    return 0;
}