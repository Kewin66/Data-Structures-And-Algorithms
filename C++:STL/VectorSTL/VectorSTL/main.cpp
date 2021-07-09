//
//  main.cpp
//  VectorSTL
//
//  Created by Kewin Srinath on 7/10/21.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int>vec = {65,78,12,34,2,6};
    cout<<"Size:"<<vec.size()<<endl;
    
    auto pos = find(vec.begin(),vec.end(),12);
    cout<<"Element 12 found at "<<pos-vec.begin()<<endl;
    
    cout<<"#################MATRIX 2D WITH VECTOR####################"<<endl;
    int m=3,n=3;
    vector<vector<int>> matrix(m);
    
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++){
            matrix[i].push_back(rand()%10);
        }
    }
    for(auto e: matrix) {
        for(auto k:e){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<"#######Declare and initialize vector with m rows and n columns#########"<<endl;
    vector<vector<int>>vec2 (m, vector<int>(n,0));
    for(auto e:vec2){
        for(auto k: e){
            cout<<k<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
