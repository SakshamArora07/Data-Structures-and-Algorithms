// SELECTION SORTING - TIME COMPLEXITY  : O(n^2)

#include<iostream>
using namespace std;


//----------WRONG APPROACH----------

// void selection_sort(int arr[], int n)
// {
//     int min = 0;

//     for(int i =0; i<=n-2; i++)
//     {
//         min = arr[i];
//         for(int j = i; j<=n-1; j++)
//         {
//             if(arr[j] < min)
//                 min = arr[j]; // this approach is wrong because we are changing the values in the min variable and not in the array.
//         }

//         swap(arr[i], min);
//     }

//     cout << endl << "sorted array using selection sort" << endl;
//     for(int i = 0; i<n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
// }

// int main()
// {
    
//     cout << "enter the number of elements in the array : " << endl;
//     int n = 0;
//     cin >> n;

//     cout << "enter the elements of the array : " << endl;
//     int arr[n] = {0};
//     for(int i = 0; i<n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "entered array : " << endl;
//     for(int i = 0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     selection_sort(arr, n);


//     return 0;

// }


//----------CORRECT APPROACH - use min, i and j similar to pointers. make them point towards the required locations and swap the values only at the last----------

#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    int min = 0;

    for(int i =0; i<=n-2; i++) // swapping loop, only till n-2 and not n-1 because it is not needed to check for the last element
    {
        min = i; // assigning the first index of the subarray arr[i to n-1] as min 
        for(int j = i; j<=n-1; j++) // loop for finding the minimum element in the subarray arr[i to n-1]
        {
            if(arr[j] < arr[min])
                min = j; 
        }

        swap(arr[i], arr[min]);
    }

    cout << endl << "sorted array using selection sort" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    
    cout << "enter the number of elements in the array : " << endl;
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
        cout << arr[i] << " ";
    }

    selection_sort(arr, n);


    return 0;

}