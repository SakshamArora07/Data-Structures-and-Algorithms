// factorial through functional recursion

#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 0)
        return 1;
    
    return n * factorial(n-1);

}


int main(){

    int n = 0;
    cout << "enter the number of which you want to find the factorial of : " << endl;
    cin >> n;
    cout << endl;

    int result = factorial(n);
    cout << "factorial of " << n << " is : " << result << endl;



    return 0;
}