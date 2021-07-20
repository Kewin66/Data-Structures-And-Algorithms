//
//  main.cpp
//  Modulo
//
//  Created by Kewin Srinath on 7/19/21.
//

#include <iostream>

/*
 
 1. Find Multiplicative modulo inverse
 2. Find modulor for negative numbers.
 
 */

int modInverse(int a, int m)
{
        //Your code here
        
        for (int i = 1; i <= m ; i++)
        {
            if(((a%m)*(i%m))%m == 1) return i;
        }
    return -1;
    }

int findmod(int a, int m){
    return (a%m + (a%m < 0 ? m : 0));
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
   
    //std::cout << modInverse(6, 34);
    
    std::cout<<"Mod of -5 & 2: "<< findmod(-5, 2)<<std::endl;
    return 0;
}
