//backtracking - the last guy gets printed first because print is after the function call.
//print n numbers linearly using backtracking(you cannot use i+1 in the function call)


 #include <iostream>
 using namespace std;

void print_the_series(int i, int n)
 {
    //base condition
    if(i < 1)
        return;
    
    print_the_series(i-1, n);
    cout << i << endl;

 }
 
 int main(){

    int n = 0;
    cout << "enter the value of n : " << endl;
    cin >> n;
    cout << endl;

    print_the_series(n,n);

    return 0;
 }
