// extract the digits of a number and count the number of digits

// through extraction of digits we can do a many programs like : 
// 1. palindrome number
// 2. armstrong number (sum of the cube of the digits of a number)

#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cout << "enter the number of which you want to extract the digits : " << endl;
    cin >> n;

    int last_digit = 0;
    int count = 0;
 
    while(n > 0){
        last_digit = n%10;
        count++;
        cout << last_digit << endl;
        n =  n/10;
    }
    
    cout << "number of digits : " << count << endl;
    return 0;

}