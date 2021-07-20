//
//  main.cpp
//  GeometricSeries
//
//  Created by Kewin Srinath on 7/19/21.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
bool isPrime(int N)
    {
        //Your code here
        
        if (N==0 || N==1) return false;
        
        if (N == 2 || N == 3 || N == 5 || N == 7)  return true;
        
        if(N%2 == 0 || N%3==0 || N%5 == 0 || N%7 == 0) return false;
        for (int i = 5; i*i<=N; i++)
        {
            if(N%i == 0) return false;
            
        }
        return true;
    }

bool perfectsquare(int num) {
        
    if(ceil(sqrt(num)) == floor(sqrt(num)))
    {
        cout<<"Perect square Num:"<<num<<endl;
        return true;
}
    return false;
    }
    
    int exactly3Divisors(int N)
    {
        //Your code here
        vector<bool> isprime(N+1, true);
        
        isprime[0]= isprime[1] = false;
        
        
        for (int i =2; i*i<=N;i++)
        {
            if(isprime[i])
            {for(int p = 2*i;p<N;p=p+i)
             isprime[p] = false;
            }
        }
        
        int count = 0;
        for(int i = 1; i*i<=N;i++)
        {
            if(isprime[i])
            {
                
                count++;
                
            }
            
        }
        return count;
    }
int main(int argc, const char * argv[]) {
    // insert code here...
     
    cout<< exactly3Divisors(67);
    
    
    cout << isPrime(779)<<endl;
    
    double A = 87, B=93;
    double r = B/A;
    cout<<setprecision(6)<< r << endl;
    
    double diff = pow(r,4);
    
    cout<< floor(A * diff)<<endl;
    
    
    
    return 0;
}
