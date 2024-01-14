// print a name n times using recursion

#include<iostream>
using namespace std;

void function_to_print_name(string name, int i, int n){

    // base/stopping condition
    if(i > n){
        return ;
    }

    cout << name << endl;
    function_to_print_name(name, i+1, n);

}

int main(){

    int n = 0;
    cout << "enter the number of times you want to print the name : " << endl;
    cin >> n;

    string name ;
    cout << "enter the name you want to print : " << endl  ;
    cin >> name;
    cout << endl;
    
    function_to_print_name(name, 1, n);

    return 0;
}

