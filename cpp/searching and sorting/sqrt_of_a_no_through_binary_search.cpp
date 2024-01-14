// square root of a number through binary search

#include<iostream>
using namespace std;

int integralPartOfTheSqaureRoot(int n) 
{
    int ans = 0;
    int start = 0;
    int end = n-1 ;
    int mid = start + (end - start) / 2 ;

    while (start <= end)
    {
        /* if(mid*mid == n)
        {
            return mid ;
        }  you can apply this condition too , it is correct and the code gives correct output but it is not needed*/

        if(mid*mid > n)
        {
            end = mid - 1;
        }

        else
        {
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2 ;
    }

    return ans ;
    
}

int main()
{

    int n = 0;
    cout << "enter the number whose square root has to be found out: ";
    cin >> n;

    double sqrt = (double) integralPartOfTheSqaureRoot(n); //function to find the integral part of the square root

    cout << "the integral part of the square root is : " << sqrt << endl;

    int precision = 0;
    cout << "enter the number of digits till where you want to find the square root: ";
    cin >> precision ;

    double step = 0.1;

    for(int i = 0; i<precision;i++)
    {
        for(double j=sqrt;j*j<=n;j+=step) //n=10,integral part = 3 ,starting from the integral part the square <= 10 we keep adding 0.1 to run the loop for 3.1 , 3.2 and so on....
        {
            sqrt = j;
        }

        step = step /10 ; //making 0.1 -> 0.01 for the next iteration so that from 3.1's we can move to 3.11's(n=10 ,integral part =3)
    }

    cout << "the sqaure root of " << n << " is " << sqrt<<endl;


}