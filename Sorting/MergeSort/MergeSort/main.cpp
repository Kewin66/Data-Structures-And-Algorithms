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

int[] mergeArray(int arr[MAX], int arr[MAX], int result[MAX])
{
    cout<<"Stupid"<<endl;
    return arr;
    
    
}
void mergeSort(int arr[MAX], int low, int high)
{
    int mid = low + (high-low)/2;
    int result[MAX];
    if(low<=high){
        
        mergeSort(arr,0, mid-1);
        mergeSort(arr,mid+1, high);
    }
    mergeArray(arr, arr, result);
    
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
