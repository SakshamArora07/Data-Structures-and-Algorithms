// BUBBLE SORTING - TIME COMPLEXITY  : O(n^2) for worst and avg case, O(n) for best case.

#include<iostream>
using namespace std;

void bubble_sort_first_approach(int arr[], int n)
{
    int didswap = 0;
    for(int i = n-2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
                didswap = 1; // for the best case
        }

        if(didswap == 0)
            break;
    }

    cout << endl << "sorted array through approach 1 : " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubble_sort_second_approach(int arr[], int n)
{
    int didswap = 0;

    for(int i = 0; i <= n-2; i++)
    {
        for(int j = 0; j <= n-i-2; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
                didswap = 1; // for the best case 
        }

        if(didswap == 0)
            break;
    }

    cout << endl << "sorted array through approach 2 : " << endl;
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

    bubble_sort_first_approach(arr, n);
    bubble_sort_second_approach(arr, n);

    return 0;
}