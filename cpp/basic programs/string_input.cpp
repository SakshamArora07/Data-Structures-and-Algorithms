#include<iostream>
using namespace std;

int main(){

    cout << "enter the string 1" << endl ;
    string s1 ;
    cin >> s1 ;

    cout << "enter the string 2" << endl ;
    string s2 ;
    cin >> s2 ;

    cout << s1 << " " << s2 << endl ;
    // this method takes input until spacebar is presses.whatever comes after the space is not taken as input.

    // this method takes sentences as input, meaning that the space is also taken as input. it takes input until enter is pressed.whatever comes after enter it is not taken as input.
    // getline method does not work if you use it after some inputs.therefore use cin.ignore(); before it.
    string s3 ; 
    cout << "enter string 3" << endl ;
    cin.ignore() ;
    getline(cin, s3);
    cout << s3 << endl ;

    // the below method also does not take input after spaces.
    char arr[10] ;
    cout << "enter string 4" << endl ;
    cin >> arr ;
    cout << arr << endl ;

    cout << s1.length() << endl ;
    cout << s1.size() << endl ;
    // length and size are same for string because characters take 1 byte.



    return 0;
}
