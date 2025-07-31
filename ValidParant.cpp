#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        if(s.size()<=1) return false;
        if(s[0] == ']' || s[0] == ')' || s[0] == '}') return false;
        stack<char> par;
        for(char c: s)
        {
            if(c == ')')
            {
                if(!par.empty()){
                    if(par.top() == '(') 
                    {
                    par.pop();
                    continue;
                    }
                }
                par.push(c);
            }
            else if(c == ']') 
            {
                if(!par.empty()){
                    if(par.top() == '[') {
                    par.pop();
                    continue;
                    }
                }
                par.push(c);
            }
            else if( c == '}')
            {
                if(!par.empty()){
                    if(par.top() == '{') 
                    {par.pop();
                    continue;}
                }
                par.push(c);
            }
            else par.push(c);
        }
        return par.empty();
    }
};