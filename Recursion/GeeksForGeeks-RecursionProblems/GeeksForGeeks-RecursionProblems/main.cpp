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

int sumOfDigits(int n)
{
    //Your code here
    if(n<=1) return n;
    
    return (n%10)+sumOfDigits(n/10);
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"Sum of digits: "<<sumOfDigits(123455)<<endl;
    printnos(10);
    return 0;
}
