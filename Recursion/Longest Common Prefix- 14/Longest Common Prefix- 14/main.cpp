//
//  main.cpp
//  Longest Common Prefix- 14
//
//  Created by Kewin Srinath on 7/23/21.
//

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<string> s = {"flowers","fly","flight"};
    sort(s.begin(),s.end());
    
    for(auto e:s)
    {
        
        cout<<e<<" ";
    }
    return 0;
}
