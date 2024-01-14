// shorter way to count the number of digits in a number
// take log base 10 of the number, add 1 to it and take only the int part of this result - it will be the number of digits in the number.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int n = 0;
    cout << "enter the number of which you want to extract the digits : " << endl;
    cin >> n;

    int count = 0;

    count = int(log10(n) + 1);
    cout << "number of digits : " << count << endl;


    return 0;
}