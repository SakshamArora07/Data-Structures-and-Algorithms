//print n numbers linearly backwards but the function call should come before the print statement-backtracking(the last guy should be executed first)

#include<iostream>
using namespace std;

void print_backwards(int i, int n){
    //base condition
    if(i > n)
        return;
    
    print_backwards(i+1, n);
    cout << i << endl;
}

int main(){

    int n = 0;
    cout << "enter the value of n : " <<endl;
    cin >> n ;
    cout << endl;

    print_backwards(1, n);


    return 0;
}