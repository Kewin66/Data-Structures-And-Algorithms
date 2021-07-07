//
//  main.cpp
//  Searching
//
//  Created by Kewin Srinath on 7/7/21.
//

#include <iostream>
#include <vector>

#define SIZE 1000
using namespace std;
void bs(vector<int> inp, int low, int high,int find_element){
    int mid = (low+high)/2;
    if(inp[mid]==find_element) {
        cout<<"Element found at pos:"<<mid<<endl;
        return;
    }
    else if(inp[mid]<find_element) {
        bs(inp,mid+1,high,find_element);
        return;
        
    } else {
        bs(inp,low,mid-1,find_element);
        return;
    }
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec;
    for (int i=0;i<SIZE/2;i++) {
        int a = rand();
        vec.push_back(a);
    }
    vec.push_back(66);
    for(int i=(SIZE/2)+1;i<SIZE;i++) {
        int a = rand();
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    bs(vec,0,SIZE-1,66);
    return 0;
}
