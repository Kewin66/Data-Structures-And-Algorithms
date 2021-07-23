//
//  main.cpp
//  RopeCutting
//
//  Created by Kewin Srinath on 7/23/21.
//

#include <iostream>
using namespace std;

int ropecutting(int N, int a , int b, int c)
{
    if( ((N-a) == 0) || ((N-b)== 0) || ((N-c) == 0) ) return N;
    if((N-a)>=0) return 1+ropecutting(N-a,a,b,c);
    else if ((N-b)>=0) return 1+ropecutting(N-b,a,b,c);
    else if((N-c)>=0) return 1+ropecutting(N-c,a,b,c);
    
    return -1;
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout<<ropecutting(5,2,5,1);
    return 0;
}
