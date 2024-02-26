// QUICK SORTING - TIME COMPLEXITY  : O(n*log(n)), SPACE COMPLEXITY : O(1)

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i <= j)
    {
        while(arr[i] < pivot && i <= high)
        {
            i++;
        }
        while(arr[j] > pivot && j >= low)
        {
            j--;
        }
        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
        swap(pivot, arr[j]);

    return j; // return the partition

}

void quick_sort(int arr[], int low, int high)
{
    if(low < high)
    {
        int partition_index = partition(arr, low, high);
        quick_sort(arr, low, partition_index-1);
        quick_sort(arr, partition_index+1, high);
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

    int low = 0;
    int high = n-1;

    quick_sort(arr, low, high);

    cout << endl << "sorted array : " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}