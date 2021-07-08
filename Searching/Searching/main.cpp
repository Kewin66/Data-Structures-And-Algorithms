//
//  main.cpp
//  Searching
//
//  Created by Kewin Srinath on 7/7/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
#define DISPLAY
#define SIZE 1000
#define BOUND_DISPLAY
using namespace std;
int BinarySearch(vector<int> inp, int low, int high,int find_element){
    
    if (high>=low) {
    int mid = low+((high-low)/2); //(low+high)/2;
#ifndef BOUND_DISPLAY
    cout<<"Low:"<<low<<"  "<<"High:"<<high<<endl;
    cout<<"Mid element:"<<mid<<" Actual Mid:"<<low+((high-low)/2)<<endl;
        cout<<"First element"<<inp[0]<<endl;
#endif
    if(inp[mid]==find_element) {
        cout<<"Element found at pos:"<<mid<<endl;
        return mid;
    }
    else if(inp[mid]<find_element) {
        return BinarySearch(inp,mid+1,high,find_element);
        
    } else {
        return BinarySearch(inp,low,mid-1,find_element);
    }
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    chrono::time_point<chrono::system_clock>start,end;
    vector<int> vec = {55,72,6,89,42,12,12,12,12,12,12,12,7,7};
#ifndef DISPLAY
    for (int i=0;i<SIZE/2;i++) {
        int a = rand();
        vec.push_back(a);
    }
    vec.push_back(66);
    for(int i=(SIZE/2)+1;i<SIZE;i++) {
        int a = rand();
        vec.push_back(a);
    }
#endif
    sort(vec.begin(),vec.end());
    for(int e:vec){
        cout<<e<<" ";
    }
    cout<<endl;
    int high = (int)vec.size()-1;
    start = chrono::system_clock::now();
    int found_index = BinarySearch(vec,0,high,8);
    end = chrono::system_clock::now();
    if(found_index==-1) {
        cout<<"Element is not present in the array.\n";
    }
    chrono::duration<double> elapsed_time = end-start;
    time_t end_time = chrono::system_clock::to_time_t(end);
    cout<<"Elapsed time for BinarySearch recursive implementation: "<<elapsed_time.count()<<endl;
    cout<<"Computation completed at "<<ctime(&end_time)<<endl;
//Iterative method to do Binary search
    int low = 0;
    int find_element = 8;
    cout<<"************Iterative Binary search*********"<<endl;
    bool flag = false;
    while(low<=high) {
        int mid = low+ (high-low)/2;
        if(vec[mid]==find_element) {
            cout<<"Element found at:"<<mid<<endl;
            flag=true;
            break;
        }
        else if (vec[mid]<find_element){
            low = mid+1;
            continue;
        }
        else {
            high=mid-1;
            continue;
        }
    }
    if(!flag) {
        cout<<"Element isn't present in the given input.\n\n\n";
    }
    cout<<"///////////STL IMPLEMENTATION//////////////\n";
//STL implementation of binary search
    //Binary Search returns if element is present or not in the input array.
    cout<<"Element is present "<<binary_search(vec.begin(),vec.end(),find_element)<<" using STL Binary search method."<<endl;
    
//STL implementatio binary search to return Index
    auto element_first_occurence = lower_bound(vec.begin(),vec.end(),find_element)-vec.begin();
    auto element_last_occurence = upper_bound(vec.begin(),vec.end(),find_element)-vec.begin();
    cout<<"Element found using lower_bound at "<<element_first_occurence<<endl;
    cout<<"Element found using upper_bound at"<<element_last_occurence<<endl;
    
    cout<<"Number of occurrences:"<<element_last_occurence-element_first_occurence<<endl;

    return 0;
}
