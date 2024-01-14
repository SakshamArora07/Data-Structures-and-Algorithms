// extreme prints in an array

#include<iostream>
using namespace std;

int main(){
int arr[5]={1,2,3,4,5};
int size=5;
int start=0;
int end=size-1;


while(start<=end) 

/*or while(true){

    put thie condition in while here in the form of if else

    if (start<=end){
        code
    }

    }*/ 
    

{

    if(start == end) //if we do not put this condition of start == end then it print the last number left in the middle twice in case of odd numbers.
    {
        cout << arr[start];
        start++;
        end--;

    }

    else{

    cout << arr[start] <<  " ";
    cout<< arr[end] <<  " ";

    start++;
    end--;
}

}

}