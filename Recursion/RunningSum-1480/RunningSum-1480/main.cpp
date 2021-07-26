//
//  main.cpp
//  RunningSum-1480
//
//  Created by Kewin Srinath on 7/26/21.
//

#include <iostream>
#include <numeric>
#include<vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
        
        vector<int> res;
        int sum = 0;
        
        for(auto e: nums)
        {
            sum+=e;
            res.push_back(sum);
        }
        
        return res;
    }
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> a = {2,4,3};
    vector<int> res;
    
    res = runningSum(a);
    
    for(auto e:res)
    {
        cout<<e<<" ";
    }
    return 0;
}
