//
//  main.cpp
//  Bits_Learning
//
//  Created by Kewin Srinath on 7/20/21.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int findrightmostsetbit(int n) {
    
    return log2(n & ~(n-1)) +1;
    
    
}
void findkbitset(int num, int k) {
    
    if(num & (1<<k)) cout<< "Yes"<<endl;
    else cout << "No"<<endl;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int num = 4, k = 2;
    findkbitset(num, k);

    int m = 11, n=9;
    
    int res = m^n; // Find first different set bit.
    
    cout << findrightmostsetbit(res)<<endl;
    
    return 0;
}
