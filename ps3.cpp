/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x*/
#include<iostream>
#include<cmath>
using namespace std;

bool isPowerOfTwo(int n) {
    for(int i=0;i<31;i++)
    {
        if(pow(2,i)==n)
        return true;
        
    }
return false;

    
}