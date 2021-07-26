//
//  main.cpp
//  GeeksForGeeks-RecursionProblems
//
//  Created by Kewin Srinath on 7/26/21.
//

#include <iostream>
using namespace std;

void printnos(int N)
{
    if(N == 0) return;
    
    printnos(N-1);
    cout<<N<<" ";
    
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printnos(10);
    return 0;
}
