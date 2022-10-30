#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
//#define sc(x,y) scanf_s("%d %d", &x,&y)
string  Decimal_To_Binary(int num) {
    ////first way 
    //int numbers[10],i;
    //for (i = 0; num>0; i++) {
    //    numbers[i] = num % 2;
    //    num /= 2;
    //}
    //for (i= i - 1; i >= 0; i--)
    //    cout << numbers[i];
    //==============

    //===========second way
    string sum = " ";
    while (num > 0) {
        if (num % 2 == 0)
            sum = "0" + sum;
        else
            sum = "1" + sum;
        num /= 2;
    }      
    return sum;
}
string CountOnes(string sum) {

    int count = 0; string binary = "";
    for (int i = 0; i < sum.size(); i++) {
        if (sum[i] == '1')
            binary = "1" + binary;
    }
    return binary;
}

int main()
{
    // from binary to dicimal there are two ways
    // first 
    /*int decimalNumber = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
         return decimalNumber;
    }*/

   // second
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        string bin(CountOnes(Decimal_To_Binary(num)));
        int decimal = stoi(bin, nullptr, 2);
        cout << decimal<<"\n";
    }
     

  
    return 0;
  //system("Pause");
    return 0;
}

 