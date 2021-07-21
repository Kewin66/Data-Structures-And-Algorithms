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

/*
 
 1. Find rightmost set bit.
 2. Find binary to gray to binary conversion
 3. Swap odd bits with even.
 4. Find longest consecutive set bits.
 5. Count total bit set from 1 to N through DP approach.
 6. Find if kth bit is set.
 7. Find maximum AND pair in given array.
 */

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
        //cout<<"Builtinpopcount:"<<__builtin_popcount(i)<<endl;
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

int findpatterncount(int pattern, vector<int> &ip){
    int count = 0;
    cout<<"Pattern is: "<<pattern<<endl;
    for(int i = 0;i<ip.size();i++)
    {
        //cout<<"Pattern And with ("<<ip[i]<<")input:"<< (pattern & ip[i])<<endl;
        if((pattern & ip[i]) == pattern)
            
        {
            cout<<"Number in AND pair input"<<ip[i]<<" \n";
            count++;}
    }
    
    return count;
    
}
void findmaxANDpair(vector<int> &inp){
    
    int res = 0, count = 0;
    for(int j = 31;j>=0;j--)
    {
        count = findpatterncount(res|(1<<j), inp);
        if(count >=2)
        {
            res = res|(1<<j);
        }
    }
    
    cout<<"Maximum AND Pair is "<< res<<endl;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int>input = {3,7,2};
    cout<<endl;
    findmaxANDpair(input);
    
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
