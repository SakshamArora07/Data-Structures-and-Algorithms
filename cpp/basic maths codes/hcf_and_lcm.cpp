// GCD/HCF - greatest common divisor or highest common factor
// find the minimum and maximum no from an array and find their gcd/hcf and their LCM.

#include<iostream>
#include<vector>
using namespace std;

    
        
    void find_max_min_no(vector<int>& nums,int &min, int &max){
    max = nums[0];
    min = nums[0];

    for(int i=0; i<nums.size(); i++)
    {
        if (nums[i] > max)
            max = nums[i];
        
        else if (nums[i] < min)
            min = nums[i];
            
    }

    cout << "minimum no in the vector is " << min << endl;
    cout << "maximum no in the vector is " << max << endl;
     
    }   


    int findGCD(int a, int b) {

        if (a == 0)
            return b;
        if (b == 0)
            return a;

        while (a>0 && b>0)
        {
            if(a>b)
                a = a-b;
            else
                b = b-a;           
        }

        return a == 0 ? b : a;

        }


    int main(){
        int n = 0;
        int element = 0;

        cout << "enter the size of the vector " << endl;
        cin >> n;
        
        vector<int> nums;
        cout << "enter the elements of the vector " << endl;
        for (int i=0; i<n; i++)
        {
            cin >> element;
            nums.push_back(element);
        }

        // int a,b = 0;
        // a,b = find_max_min_no(nums); we cant return multiple values from a function therefore we use &(reference)
        
        int min,max ;
        find_max_min_no(nums,min,max);

        int gcd = 0;
        
        gcd = findGCD(min,max);
        cout << "the gcd is " << gcd << endl; 

        // LCM * HCF = a * b

        int lcm = 0;
        lcm = (min*max) / gcd ;
        cout << "the LCM is " << lcm << endl;

        return 0;
        
    }
    
   
