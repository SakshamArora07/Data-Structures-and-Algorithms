// nearly sorted array : if an element is at i th position in a sorted array then that element can be at (i-1) th or i th or (i+1) th position in the nearly sorted array

#include<iostream>
using namespace std;

bool binarySearch(int a[] , int n , int key) 
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2 ;

    while(start <= end)
    { 
    if(a[mid] == key)
        return true;
        
    if(a[mid-1] == key)
        return true;

    if(a[mid+1] == key)
        return true;

    if(a[mid] > key)
        end = mid-2;

    else
        start = mid+2;
    
    mid = start + (end-start)/2 ;


    }

    return false;
}


int main(){

    int n;
    int key;
    
    cout << "enter the size of the array" << endl;

    cin >> n;

    int a[n];

    cout << "enter the array elements of a nearly sorted array" << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cout << "enter the key to find" << endl;
    cin >> key;
    
   bool result = binarySearch(a , n , key);
   cout << result;
}

