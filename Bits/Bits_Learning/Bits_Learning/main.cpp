//
//  main.cpp
//  Bits_Learning
//
//  Created by Kewin Srinath on 7/20/21.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>


using namespace std;
int findrightmostsetbit(int n) {
    
    return log2(n & ~(n-1)) +1;
}

void findkbitset(int num, int k) {
    if(num & (1<<k)) cout<< "Yes"<<endl;
    else cout << "No"<<endl;
}

void countsetbits(int n){
    vector<int>dp(n+1,0);
    dp[0] = 0;
    
    for(int i = 0;i<=n;i++){
        cout<<"Builtinpopecount:"<<__builtin_popcount(i)<<endl;
        dp[i] = dp[i>>1] + (i&1);
    }
    int counter = 0;
    for(auto i:dp)
    {
        cout<<"Num:"<<counter<<"---"<<i<<endl;
        counter++;
    }
}
void longestconsecutivesetbits(int n){
    int counter =0;
    while(n>0)
    {
        n= n & n>>1;
        counter++;
    }
    cout<<"Number of consecutive ones: "<<counter<<endl;
}

void graytobinarytogray(int n) // Binary to gray to binary
{
    cout<<"Binary to gray"<<endl;
    
    int res = (n ^ (n>>1));
    cout<<"Res:"<<res<<endl;
    
    cout<<"Gray to binary"<<endl;
    
    int temp = res;
    while(res>0)
    {
        res>>=1;
        temp^=res;
    }
    
    cout<<"GrayToBinary is "<<temp<<endl;
    
}
void swapBits(unsigned int n)
    {
        // Your code here
        int e = n & 0xAAAAAAAA;
        int o = n & 0x55555555;
        
        e>>=1;
        o<<=1;
    int res = e|o;
        cout << "After swapping even bits with odd bits:"<< res;
    }
int main(int argc, const char * argv[]) {
    // insert code here...
    
    swapBits(23);
    graytobinarytogray(7);
    
    longestconsecutivesetbits(222);
    countsetbits(6);
    
    int num = 4, k = 2;
    findkbitset(num, k);

    int m = 11, n=9;
    
    int res = m^n; // Find first different set bit.
    
    cout << findrightmostsetbit(res)<<endl;
    
    return 0;
}
