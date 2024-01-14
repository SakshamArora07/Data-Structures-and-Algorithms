// reverse an array using recursion using 2 pointer/variable approach

#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end, int size_of_array){

    //The size of the array is not calculated correctly using sizeof(arr)/sizeof(arr[0]) inside the reverse function. This calculation will not work for function parameters as arrays decay into pointers, and sizeof(arr) will give you the size of the pointer, not the array. It's better to pass the size of the array as a separate parameter.

    // int size_of_array = sizeof(arr)/sizeof(arr[0]);
    // cout << "size of the array is : " << size_of_array << endl;

    if(start >= end){
        cout << endl << "reversed array : ";
        for(int i=0; i<size_of_array; i++){
            cout << arr[i] << " ";
        }
        return;
    }

    swap(arr[start], arr[end]);
    reverse(arr, start+1, end-1, size_of_array);
}

int main(){

    int n ;
    cout << "enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array : " << endl;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    cout << "entered elements of the array are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    int start = 0;
    int end = n-1;
    int size_of_array = sizeof(arr)/sizeof(arr[0]);
    cout << endl << "size of the array : " << size_of_array << endl;
    reverse(arr, start, end, size_of_array);

    return 0;
}