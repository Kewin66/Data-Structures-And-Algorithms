//
//  main.cpp
//  BubbleSort
//
//  Created by Kewin Srinath on 7/6/21.
//

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>

//Number of elements to be generated for sorting.
#define num_elements 100000
#define ull long long int

//Uncomment iff randomly generated array elements needs to be displayed.
//#define DISPLAY

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<ull> vec;
    chrono::time_point<chrono::system_clock> start, end;
    
    cout<<"Input elements are randomly generated and populated"<<endl;
    for (ull i=0;i<num_elements;i++){
        ull in = rand();
        vec.push_back(in);
    }
    
#ifdef DISPLAY
    cout<<"Elements of Array in unsorted order"<<endl;
    for (auto e:vec) {
        
        cout<<e<<" ";
    }
#endif
    cout<<endl;
    bool flag;
    cout<<"Input elements are being sorted..."<<endl;
    start = chrono::system_clock::now();
    for (ull i=0;i<vec.size()-1;i++){ //Number of passes required to sort elements. If there are N elements then sorting N-1 elements leaves the whole array sorted.
        flag = false;
        // 'i' elements from last are sorted in previous passes.
        for (ull j=0;j<vec.size()-1-i;j++) {
            if(vec[i]>vec[j]){
                ull temp = vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
                flag= true;
            }
        }
        //When there is no swapping of elements in the current pass,
        //it means all elements are sorted and further pass can be ignored.
        if (!flag) break;
    }
    end = chrono::system_clock::now();
    
    chrono::duration<double> elapsed_time = end -start;
    
    cout<<"*********Array is sorted in ascending order*************"<<endl;
#ifdef DISPLAY
    for(ull e:vec){
        cout<<e<<" ";
    }
    cout<<endl;
#endif
    time_t end_time = chrono::system_clock::to_time_t(end);
    cout<<"Performance completed on "<<ctime(&end_time);
    cout<<"Elapsed Time to sort in ascending order:"<<elapsed_time.count()<<"s"<<endl;
    
    start = chrono::system_clock::now();
    sort(vec.begin(),vec.end(),greater<>());
    end = chrono::system_clock::now();
    
    chrono::duration<double> elapsed_time_descending = end-start;
    
    time_t end_time_descending = chrono::system_clock::to_time_t(end);
    cout<<"************Array sorted in descending order************"<<endl;
#ifdef DISPLAY
    for (ull e:vec) {
        cout<<e<<" ";
    }
#endif
    cout<<endl;
    cout<<"Performance completed on"<<ctime(&end_time_descending)<<endl;
    cout<<"Elapsed time to sort in descending order"<<elapsed_time_descending.count()<<"s\n";
    cout<<endl;
    return 0;
}
