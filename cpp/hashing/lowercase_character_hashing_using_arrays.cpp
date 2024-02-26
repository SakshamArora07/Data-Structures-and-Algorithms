// lowercase character hashing using arrays.

#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cout << "enter the size of the array : " << endl;
    cin >> n;
    
    char array[n] ;
    cout << "enter the characters of the array : " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> array[i];
    }

    cout << "entered array : " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    int hash[100000] = {0}; // max size that can be used is 10 to the power of 6 when declaring locally in the main function. the maximum size allowed is 10 to the power of 7 when declared globally.
    for(int i = 0; i<n; i++)
    {
        hash[array[i] - 'a'] += 1; // the only major change is here that we subtract 'a'(ASCII value = 97) from the lowercase character entered to put 'a' at 0th index of the hash array, 'b' at the 1st index of the hash array and so on. For uppercase character hashing subtract 'A'
    }

    cout << "enter the number of characters whose count you want to check : " << endl;
    int m = 0;
    cin >> m;
    char check_array[m] ;
    cout << "enter the characters whose count you want to check : " << endl;
    for(int i = 0; i<m; i++)
    {
        cin >> check_array[i];
    }

    for(int i = 0; i<m; i++)
    {
        cout << check_array[i] << " occurs " << hash[check_array[i] - 'a'] << " times " << endl;
    }





    return 0;
}