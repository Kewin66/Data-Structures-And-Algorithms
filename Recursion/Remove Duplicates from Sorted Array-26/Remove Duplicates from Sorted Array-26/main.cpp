//
//  main.cpp
//  Remove Duplicates from Sorted Array-26
//
//  Created by Kewin Srinath on 7/26/21.
//

#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& nums) {
        
        int left = 0, right = 1, count = 0;
        
        if(nums.size()) count++;
        else if(nums.size() == 1) return 1;
        else return 0;
    
        int k = 1;
        
        while(right<nums.size()) {
            
            if(nums[left] == nums[right])
            {right++;
             continue;
            }
            else {
                count++;
                nums[k] = nums[right];
                k++;
                
                left = right;
                right+=1;
            }
            
        }
        return count;
    }
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> a = {0,0,0,0};
    int k = removeDuplicates(a);
    
    for(int i = 0; i< k; i ++)
    {
        
        cout<<a[i]<<" ";
    }
    return 0;
}
