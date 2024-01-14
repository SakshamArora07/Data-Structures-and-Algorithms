// find the nth fibonacci number using multiple recursion calls

// time complexity : exponential - O(2^n) because for every node/function call 2 more function calls/nodes are called and there are n nodes

#include<iostream>
using namespace std;

int fibonacci(int n){

    if(n <= 1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int n = 0;
    cout << "enter n for nth fibonacci number : " << endl;
    cin >> n;

    int result = fibonacci(n);
    cout << "the nth fibonacci number is : " << result << endl;
    return 0;
}