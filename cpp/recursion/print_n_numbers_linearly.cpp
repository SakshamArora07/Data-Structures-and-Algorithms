//print n numbers linearly using recursion

#include<iostream>
using namespace std;

void print_the_number(int i, int n){
    //base condition
    if(i > n)
        return;

    cout << i << endl;
    //if question was print n numbers linearly backwards then use cout << n+1-i << endl;
    //or you can intialize i as n in the 1st main call and run the loop till i<1 and call with i-1 in the next calls and print i everytime.
    print_the_number(i+1, n);

}

int main(){

    int n = 0;
    cout << "enter the value of n : " << endl ;
    cin >> n;
    cout << endl;

    print_the_number(1, n);


    return 0;
}

