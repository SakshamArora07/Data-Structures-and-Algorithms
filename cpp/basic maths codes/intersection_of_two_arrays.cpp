// intersection of 2 arrays

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector <int> arr{1,2,3,4,6,88,76,3};
    

    vector <int> brr {2,3,76,88,98,3};
    

    int k = 0;
    vector <int> crr;

    for(int i = 0 ; i<arr.size(); i++)
    {
          for (int j = 0; j<brr.size();j++){
            if (arr[i]==brr[j]){
                brr[j]=INT8_MIN; //changing the 2nd arrays elements value so that repetition does not happen
                crr.push_back(arr[i]);
            }
          }  
    }

    for ( k = 0; k < crr.size(); k++){
        cout << crr[k]<< " ";
    }


}