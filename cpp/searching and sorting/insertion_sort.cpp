// INSERTION SORTING - TIME COMPLEXITY  : O(n^2) for worst and avg case, O(n) for best case.

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            if(arr[j] < arr[j-1])
                swap(arr[j], arr[j-1]);
        }

    }

    cout << endl << "sorted array : " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    cout << "enter the size of the array" << endl;
    int n = 0;
    cin >> n;

    cout << "enter the elements of the array : " << endl;
    int arr[n] = {0};
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "entered array : " << endl;
        for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }

    insertion_sort(arr, n);

    return 0;
}