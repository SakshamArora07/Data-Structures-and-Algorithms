// MERGE SORTING - TIME COMPLEXITY  : O(n*log(n)), SPACE COMPLEXITY : O(n)

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }

        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high ; i++){
        arr[i] = temp[i - low];
    }

}

void divide(int arr[], int low, int high)
{
    //base condition 
    if(low >= high)
        return;

    int mid = (low + high)/2;
    divide(arr, low, mid);
    divide(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
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

    cout << endl;
    cout << "sorted array : " << endl;

    int low = 0;
    int high = n-1;
    divide(arr, low, high);

    // we can directly print arrays in the main function without returning them because arrays work on pass by reference basis therefore original array gets changed whenever a change is made.
    for(int i = low; i <= high; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
