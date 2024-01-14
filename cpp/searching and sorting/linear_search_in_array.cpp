//linear search in an array

//WRONG APPROACH
/*#include<iostream>
using namespace std;

int main()
{

    int arr[3]={4,5,6};
    int key = 0;

    
    cout << "enter the number you want to search" << endl;
    cin >> key;

    for(int i =0 ; i < 3 ; i++)
    {
        if ( arr[i] == key)
        {
            cout << "number found " << endl;
        }

        else {
            cout << "number not found in the array" << endl;
        }
    }
 return 0;   
}*/



// CORRECT APROACH
#include<iostream>
using namespace std;

int main()
{

    int arr[3]={4,5,6};
    int key = 0;
    int flag = 0;
    // flag = 0 -> key not found
    // flag = 1 -> key found

    cout << "enter the number you want to search" << endl;
    cin >> key;

    for(int i =0 ; i < 3 ; i++)
    {
        if ( arr[i] == key)
        {
            flag = 1;
            break;
        }

    }

    if(flag)
    {
        cout << "number found in the array" << endl ;
    }

    else
    {
        cout << "number not found in the array" << endl;
    }


 return 0;   
}