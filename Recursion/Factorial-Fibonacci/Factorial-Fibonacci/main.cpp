//
//  main.cpp
//  Factorial-Fibonacci
//
//  Created by Kewin Srinath on 7/23/21.
//

#include <iostream>

using namespace std;

int  fibonacci(int n)
{
    if(n == 1 || n == 0) {return n;}
    
    return fibonacci(n-1) + fibonacci(n-2);
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout<< fibonacci(5)<<endl ;
    return 0;
}
