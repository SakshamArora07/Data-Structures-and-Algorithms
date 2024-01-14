//  finding union of two arrays with duplicate elements

#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector <int> arr1 {1,2,3,4};
  vector <int> arr2 {2,3,7,8};

  vector <int> arr3;

  for (int i=0; i<arr1.size(); i++){
    for(int j=0;j<arr2.size();j++){

        if(arr1[i]==arr2[j])
            arr2[j]=INT8_MIN;

    }
  }

   for (int i=0; i<arr1.size(); i++)
    
    arr3.push_back(arr1[i]);

   for(int j=0;j<arr2.size();j++)

    if(arr2[j] != INT8_MIN)
       arr3.push_back(arr2[j]);

   
   for (int k=0;k<arr3.size();k++)
    cout << arr3[k]<< " ";



}