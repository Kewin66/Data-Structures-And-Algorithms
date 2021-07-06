//
//  main.cpp
//  BubbleSort
//
//  Created by Kewin Srinath on 7/6/21.
//

#include <iostream>
#include <vector>
#include <string>

#define ull long long int
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<ull> vec;
    ull num_elements;
    
    cout<<"Enter number of elements in the Array to be sorted:";
    cin>>num_elements;
    
    cout<<"Enter the input elements..."<<endl;
    for (ull i=0;i<num_elements;i++){
        ull in;
        cin>>in;
        vec.push_back(in);
    }
    cout<<"Elements of Array in unsorted order"<<endl;
    for (auto e:vec) {
        
        cout<<e<<" ";
    }
    
    cout<<endl;
    for (ull i=0;i<vec.size()-1;i++){
        for (ull j=i+1;j<vec.size();j++) {
            if(vec[i]>vec[j]){
                ull temp = vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
            }
        }
    }
    
    cout<<"Elements in ascending order"<<endl;
    for(ull e:vec){
        cout<<e<<" ";
    }
    cout<<endl;
    
    sort(vec.begin(),vec.end(),greater<>());
    cout<<"********Array sorted in descending order************"<<endl;
    for (ull e:vec) {
        cout<<e<<" ";
    }
    return 0;
}
