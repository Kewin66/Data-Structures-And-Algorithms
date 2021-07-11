//
//  main.cpp
//  Vector_PAIR_ITERATOR
//
//  Created by Kewin Srinath on 7/11/21.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec(10,6);
    vector<int>vec2(vec);
    
    for(auto e:vec2){
        cout<<e<<" ";
    }
    cout<<endl;
    
    vec.clear();
    for(int i =0; i<10;i++){
        vec.push_back(i);
        if(i==6){vec.push_back(i);
            vec.push_back(i);
            vec.push_back(i);
        }
    }
    vec.push_back(10);
    vec.push_back(10);
    vec.push_back(10);
    //Copy vec to temporary vector 2 using normal assignment operator
    vec2 = vec;
    for(auto e:vec2) {
        
        cout<<e<<" ";
    }
    cout<<endl;
    //If current element is not last element then erase it from vector. Fails when there are duplicates of last element
    for (auto it = vec2.begin();it!=vec.end();) {
        
        if(*it==vec.back()){break;}
        cout<<"Element "<<*it<<" is erased"<<endl;
        vec2.erase(it);
        
        ++it;
    }
    
    for(auto e:vec2) {
        
        cout<<e<<" ";
    }
    cout<<endl;
    //Delete all duplicates of element 10 in vector. Have only one element.
    vec2.erase(lower_bound(vec2.begin(),vec2.end(),10)+1,upper_bound(vec2.begin(),vec2.end(),10));
    
    for (auto e:vec2) {
        
        cout<<e<<" ";
    }
    auto find_it = find(vec2.begin(),vec2.end(),5);
    cout<<"\nPosition at which 5 is found: "<<find_it-vec2.begin()<<endl;
    cout<<endl;
    return 0;
}
