//
//  main.cpp
//  GeneratePowerSet
//
//  Created by Kewin Srinath on 7/23/21.
//

#include <iostream>
using namespace std;

void generate(string s, int index, string curr)
{
    if(index == s.length())
    {
        cout<<"Curr:"<<curr<<endl;
        return;
    }
    
    //generate(s,index+1, curr);
    
    
    generate(s,index+1, curr+s[index]);
    
    generate(s,index+1, curr);
    //cout<<"Curr:"<<curr<<endl;
    
    return;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    generate("ABC",0,"");
    return 0;
}
