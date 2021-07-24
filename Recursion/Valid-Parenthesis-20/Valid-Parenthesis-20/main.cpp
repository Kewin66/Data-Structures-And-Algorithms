//
//  main.cpp
//  Valid-Parenthesis-20
//
//  Created by Kewin Srinath on 7/24/21.
//

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    
    int len = 0;
    while(len<s.length())
    {
        if(s[len] == '(' ||  (s[len] == '[') || (s[len] == '{')) {
            st.push(s[len]);
            len++;
            //cout<<"Top after pushing: "<< st.top()<<endl;
            continue;
        }
        
        if(st.empty()) return false;
        char t = st.top();
        //cout<<"Top while checking for closing: "<<st.top()<<endl;
        if(((t == '(') && (s[len] != ')')) || ((t == '[') && (s[len] != ']'))
           || ((t == '{') && (s[len] != '}'))) {
            return false; }
            
        st.pop();
        len++;
        //cout<<"Len:"<<len<<endl;
    }
    
    if(st.empty()) return true;
    
    
    return false;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<isValid("([)])");
    return 0;
}
