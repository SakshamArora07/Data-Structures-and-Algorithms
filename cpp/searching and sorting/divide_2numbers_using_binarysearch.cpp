#include<iostream>
using namespace std;

int divide(int dividend, int divisor) {

        int start = 0;
        int end = abs(dividend);
        int mid = start + (end-start)/2;
        int ans = 0;

        while(start <= end){
            if(abs(mid*divisor) == abs(dividend))
            {
                ans=mid;
                break;
            }

        if(abs(mid*divisor) > abs(dividend))
            end = mid-1;

        else{
            ans = mid; //store the ans(mid value)
            start = mid+1;
        }

        mid = start + (end - start)/2;
        }

        if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
            return ans;
        else
            return -ans;
        
    }

int main(){
    int dividend = 0;
    int divisor = 0;

    cout << "enter the dividend and divisor in order" << endl;
    cin >> dividend;
    cin >> divisor;

    int quotient = 0;
    quotient = divide(dividend,divisor);
    cout << quotient ;
}