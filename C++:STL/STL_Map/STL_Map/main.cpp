//
//  main.cpp
//  STL_Map
//
//  Created by Kewin Srinath on 7/19/21.
//

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;
bool comp(pair<char, int> &t1, pair<char,int> &t2)
{
    return t1.second>t2.second;
    
}

void sortMap(map<char, int> &mp, unordered_map<char, int> &up){
    vector<pair<char, int>>cmp;
    
    for(auto itr:mp){
        cmp.push_back(itr);
        
    }
    sort(cmp.begin(),cmp.end(),comp);
    
    cout<<"Displaying order of Vector"<<endl;
    
    for(auto itr: cmp){
        cout<<itr.first<<":"<<itr.second<<endl;
        
    }
    cout<<"##############"<<endl;
    mp.empty();
    
    for(auto itr:cmp){
        up.insert({itr.first, itr.second});
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    unordered_map<char, int> up;
    vector<char> inserted_order;
    map<char, int> mp;
    string s;
    
    cout<<"Enter the string:";
    cin>>s;
    
    for(char c: s){
        mp[c]++;
        inserted_order.push_back(c);
    }
    
    sortMap(mp, up);
    for(auto itr:up){
        
        cout<<itr.first<<":"<<itr.second<<endl;
    }
    
    cout<<"Displaying elements by inserted order"<<endl;
    
    for(auto c:inserted_order){
        
        if(mp.find(c)!=mp.end()){
        cout<<"Char: "<< c<<" Frequency:"<<mp[c]<<endl;
            mp.erase(c);
        }
    }
    
    
    
    return 0;
}
