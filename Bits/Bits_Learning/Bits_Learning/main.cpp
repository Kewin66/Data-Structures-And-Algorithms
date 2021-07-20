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
        int temp = i;
        cout<<"Right shift of i("<<temp<<")by 1: " << (temp>>1)<<endl;
        cout<<"Temp: "<<temp<<endl;
        cout<<"Builtinpopecount:"<<__builtin_popcount(i)<<endl;
        dp[i] = dp[i>>1] + (i&1);
        if(i==5) cout << "dp[5]" << dp[5]<<endl;
    }
    int counter = 0;
    for(auto i:dp)
    {
        cout<<"Num:"<<counter<<"---"<<i<<endl;
        counter++;
        
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    countsetbits(6);
    
    int num = 4, k = 2;
    findkbitset(num, k);

    int m = 11, n=9;
    
    int res = m^n; // Find first different set bit.
    
    cout << findrightmostsetbit(res)<<endl;
    
    return 0;
}