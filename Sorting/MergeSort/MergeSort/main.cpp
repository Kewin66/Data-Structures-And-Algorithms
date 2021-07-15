//
//  main.cpp
//  MergeSort
//
//  Created by Kewin Srinath on 7/15/21.
//

#include <iostream>
#include <vector>

#define MAX 100
using namespace std;

void mergeSort(int &arr, int low, int high)
{
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int arr[MAX];
    for (int i=0;i<MAX;i++){
        arr[i] = rand()%1000;
    }
    
    mergeSort(arr,0,MAX-1);
    for(auto e:arr){
        cout<<e<<" ";
    }
    return 0;
}
