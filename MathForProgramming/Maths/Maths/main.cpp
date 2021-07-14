//
//  main.cpp
//  Maths
//
//  Created by Kewin Srinath on 7/14/21.
//

/*
 
 1. Find number of digits using log10
 2. Find number of trailing zeros in factorial of a number. (Fails my method)
 
 
 */
#include <iostream>
#include <cmath>
//#include <chrono>
//#include <ctime>
using namespace std;

int countdigits(long long int n)
{
    
    return floor(log10(n)+1);
}

int countfives(int n) {
    int count =0;
    while(n>0) {
        if((n%5) == 0) {count++;}
        n/=5;
    }
    return count;
}
int main(int argc, const char * argv[]) {
    chrono::time_point<chrono::system_clock>start, end;
    
    cout<<"Enter the digit:"<<endl;
    long long int digit;
    cin>>digit;
    cout<<"Number of digits: "<< countdigits(digit)<<endl;
    
    cout<<"#########Trailing zeros in Factorial##########"<<endl;
    cout<<"Enter the digit: ";
    int dig;
    cin>>dig;
    int num_fives = 0; int indi_fives =0;
    /*
     1,2,3,4,5,6,7,8,9,10,11,12,13,...,25,26,27,..,100
     Five will occue at internval of 5. Hence, n/5 will give minimum number of fives present in N. Say N is 100, then it has ATLEAST 20 fives.
     
     25 will have 2 fives. Need to count number of 25s in N and add only one because one prime factor of 5 is counted previously while doing so for 5 in N.
     
     Similarily for 125 5*5*5,
                    625 5*5*5*5
     
     
     */
    
    //My Implementation for counting fives in brute force method.
    
    start = chrono::system_clock::now();
    for(int i = 5;i<=dig;)
    {
        indi_fives=countfives(i);
        cout<<"Number of fives in digit ("<<i<<"): "<<indi_fives<<endl;
        num_fives+=indi_fives;
        i+=5;
    }
    end = chrono::system_clock::now();
    
    chrono::duration<double> elapsed_time = end-start;
    time_t end_time =  chrono::system_clock::to_time_t(end);
    cout<<"Total number of fives in digit: "<<num_fives<<endl;
    cout<<"Time taken: "<<elapsed_time.count()<<"s"<<endl;
    cout<<"Method completed on "<<ctime(&end_time)<<endl;
    //Optimized way of counting fives.
    
    num_fives = 0;
    
    for(int i =5;i<=dig;i=i*5){
        
        num_fives += dig/i;
    }
    
    cout<<"Number of fives in digit (Optimized way): "<< num_fives <<endl;
    return 0;
}
