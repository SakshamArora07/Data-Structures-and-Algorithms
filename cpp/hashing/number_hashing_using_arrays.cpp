// number hashing using arrays.

#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cout << "enter the size of the array : " << endl;
    cin >> n;
    
    int array[n] = {0};
    cout << "enter the elements of the array : " << endl;
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
        hash[array[i]] += 1;
    }

    cout << "enter the number of elements whose count you want to check : " << endl;
    int m = 0;
    cin >> m;
    int check_array[m] = {0};
    cout << "enter the elements whose count you want to check : " << endl;
    for(int i = 0; i<m; i++)
    {
        cin >> check_array[i];
    }

    for(int i = 0; i<m; i++)
    {
        cout << check_array[i] << " occurs " << hash[check_array[i]] << " times " << endl;
    }





    return 0;
}