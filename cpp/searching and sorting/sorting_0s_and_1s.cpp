// sorting 0s and 1s

#include<iostream>
#include<vector>
using namespace std;

int main(){

    cout << "sorting 0s and 1s" << endl;

    vector <int> arr {0,1,1,0,0,1,0,0,1,0,1,0,0,0,0,1,1,1,1,1,0,1,1,0,0,1,0,0,0,0,1,0,1};
    int end = arr.size() - 1 ;
    int start = 0;
    int i =0;
    while( i < end)
    {
        
        if(arr[i] == 1){
            swap(arr[i],arr[end]);
            end--;
        }
            
        

        if(arr[i] == 0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
    
    }


    for (int i = 0; i < arr.size() ; i++)
        cout << arr[i] << " " ;
    
}