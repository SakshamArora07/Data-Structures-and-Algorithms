// sum of first n numbers using recursion (parameter and functional approaches)

#include<iostream>
using namespace std;

// ----------------------------------------------------------------paramerter way------------------------------------------------

void sum_of_first_n_numbers_parameter(int i, int sum){

    //base condition
    if(i < 1)
    {
        cout << "sum of first n numbers through parameter approach is : " << sum << endl;
        return;
    }

    sum_of_first_n_numbers_parameter(i-1, sum+i);
}

// ------------------------------------------------functional way------------------------------------------------

int sum_of_first_n_numbers_functional(int n){

    if(n == 0)
        return 0;
    
    return n + sum_of_first_n_numbers_functional(n-1);

}


int main(){

    int n = 0;
    cout << "enter the number till which you want to find the sum of first n numbers : " << endl;
    cin >> n;
    cout << endl;
    int sum = 0;

    sum_of_first_n_numbers_parameter(n, sum);

    int sum_through_functional = sum_of_first_n_numbers_functional(n);
    cout << "sum of first n numbers through functional approach is : " << sum_through_functional << endl;



    return 0;
}