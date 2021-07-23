//
//  main.cpp
//  Josephus-Problem
//
//  Created by Kewin Srinath on 7/23/21.
//

#include <iostream>
#include <vector>

using namespace std;
/*vector<int> jp(vector<int> n, int k, int start, int alive)
{
    if(alive == 1) return n;
    int dead = (start + (k-1))%n.size();
    
    while(n[dead] != -1) {dead++;}
    dead %= n.size();
    cout<<"Dead:"<<dead<<" ";
    return jp(n,k,(dead+1)%n.size(),alive-1);
    
}*/

int jp(int n , int k)
{
    if(n ==1) return 0;
    
    return ((jp(n-1,k)+k)%n);
    
}

int myjp(int n , k)
{
    
    return jp(n,k)+1; // if Circle is numbered from 1.
}
int main(int argc, const char * argv[]) {
    // insert code here...
   // vector<int> n(7,0);
    //vector<int> res = jp(n,3,0,7);
    
    cout<<"\nAlive person:"<<jp(7,3)<<endl;
    return 0;
}
