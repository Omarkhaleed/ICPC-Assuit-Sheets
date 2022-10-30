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


    int n;
    cin >> n;
    ////vector<int>v;
    /////*v.resize(n); */
    ////int input;
    ////for (int i = 1; i <= n; i++) {
    ////    cin >>input;
    ////    v.push_back(input);
    ////    }
    //unique_ptr<int[]> numbers(new int[n]);
    int* numbers = new int[n];
    int input;
    for (int i = 0; i < n; i++) {
        cin >> input;
        numbers[i]=input;      
    }

   
    int positive = 0, negative = 0, even = 0, odd = 0;
    for (int j = 0; j < n; j++) {
        if (numbers[j] > 0)
            positive++;
        if (numbers[j] < 0)
            negative++;

        if (numbers[j] % 2 == 0)
            even++;
       
        else
            odd++;
    }
    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";
    //system("Pause");
    return 0;
}