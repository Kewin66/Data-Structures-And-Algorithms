//
//  main.cpp
//  QuadraticEquation
//
//  Created by Kewin Srinath on 7/19/21.
//


/*
 
 if discriminant part is greater than 0, equal to 0.
 
 
 */
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
void quadraticRoots(int a, int b, int c) {
    // code here
    vector<int> roots;
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
   double sum = sqrt((b*b)-(4*a*c));
    cout<< "Sum:"<< sum<<endl;
    double div = 2*a;
    
    cout<<"div:"<<div<<endl;
    double num1 = ((b*(-1)) + sum );
    cout<< "Num1:" << num1 <<endl;

    double root1 = (b*(-1))/div+(sum/div);
    cout<<"Root1:"<<root1<<"---";
    double root2 = ((b*(-1))/div)-(sum/div);
    cout<<"Root2:"<<root2<<"---\n";
    
    cout<< floor(root1) <<endl;
    cout<< floor(root2) <<endl;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    quadraticRoots(752, 904, 164);
    return 0;
}
