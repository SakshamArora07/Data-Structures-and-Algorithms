#include<iostream>
using namespace std;

void palindrome(string s, int start, int end){

    if(start >= end/2){
        cout << "yes - palindrome string" << endl;
        return;
    }

    if(s[start] == s[end - start - 1])
    {
        palindrome(s, start+1, end);
    }

    else{
        cout << "no - not a palindrome string" << endl;
    }

}

int main(){

    cout << "enter the string : " << endl;
    string s;
    cin >> s ;
    int  end = s.length();
    cout << "length of the string is : " << end << endl;
    int start = 0;
    
    palindrome(s, start, end);

    return 0;
}