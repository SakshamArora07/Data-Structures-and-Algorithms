// hash map

#include<iostream>
#include <bits/stdc++.h> // to include all cpp stl
using namespace std;

int main(){

    int n = 0;
    cout << "enter the size of the array : " << endl;
    cin >> n;
    
    char array[n] ;
    cout << "enter the characters of the array : " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> array[i];
    }

    cout << "entered array : " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    unordered_map<char, int> mpp;
    for(int i = 0; i<n ; i++)
    {
        mpp[array[i]]++ ;
    }

    for(auto i : mpp)
    {
        cout << i.first << " occurs " << i.second << " times " << endl;  
    }

    cout << "finding a specific element and seeing how many times it occurs : " << endl;
    char j;
    cout << "enter the index of the map whose key(the number) and value(its frequency) you want to check : " << endl;
    cin >> j;


    auto i = mpp.find(j);
    cout << (*i).first << " -> " << (*i).second << endl;




    return 0;
}