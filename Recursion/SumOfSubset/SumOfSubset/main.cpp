//
//  main.cpp
//  SumOfSubset
//
//  Created by Kewin Srinath on 7/23/21.
//

#include <iostream>
#include<vector>

using namespace std;

int findsubsets(const vector<int> &a,int sum, int index, int subsum)
{
    static int count = 0;
    if(index == a.size())
    {   //int temp = 0;
        /*for(auto e:b) {
            temp+=e;
            cout<<e<<" ";
        }
        cout<<endl;*/
        if(sum == subsum ) count++;
        return 1;
    }
    //b.push_back(a[index]);
    cout<<"\nsubsum+a[index]"<<subsum+a[index]<<" ";
    findsubsets(a, sum, index+1,subsum+a[index]);
    //b.pop_back();
    cout<<"\nIndex: "<<index;
    cout<<"\nsubsum-a[index]"<<subsum-a[index]<<" ";
    findsubsets(a,sum, index+1,subsum-a[index]);
    
    
    //if(n-1) == 0 return sum == 0 ?1:0;
    // return subsets(a,n-1,subsum)+subsets(a,n-1,subsum+a[n-1])
    
    return count;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int>a = {10,20,15};
    vector<int> t = {};
    int sum = 25;
    cout<<"Number of subsets with sum 4: "<<findsubsets(a,sum,0,0)<<endl;
    return 0;
}
