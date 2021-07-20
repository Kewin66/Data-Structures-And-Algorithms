//
//  main.cpp
//  Modulo
//
//  Created by Kewin Srinath on 7/19/21.
//

#include <iostream>


int modInverse(int a, int m)
    {
        //Your code here
        
        for (int i = 1; i <= m ; i++)
        {
            if(((a%m)*(i%m))%m == 1) return i;
            
        }
    return -1;
    }
int main(int argc, const char * argv[]) {
    // insert code here...
   
    std::cout << modInverse(6, 34);
    return 0;
}
