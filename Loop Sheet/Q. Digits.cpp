#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
void Reverse(int x) {
    
    string s = to_string(x);
    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i]<< " ";

    }

   
}
int main(){
      
    int size;
    cin>>size;
    int* numbers = new int[size];
    for (int i = 0; i < size; i++) {
        cin>>numbers[i];
    }
    for (int i = 0 ; i <size ; i++){
        Reverse(numbers[i]);
        cout << "\n";
    }
    //system("Pause");
    return 0;
}