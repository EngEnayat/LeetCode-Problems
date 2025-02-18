#include <istream>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1) return true;
        vector <char> comp;
        stack <char> text;
        string x;
        for(char c : s)
        {
            if(isalnum(c))
            {
                c = tolower(c);
                comp.push_back(c);
                text.push(c);
                cout << comp[comp.size() - 1];
            }
        }
        // cout << "\n";
        int num=0;
        int sw =1;
        while(!text.empty())
        {
            cout << text.top();
            char c = text.top();
            if(comp[num] != c) return false;
            num++;
            text.pop();
        }
        return true;
    }
};
int main()
{
    Solution obj;
    cout << obj.isPalindrome("0P");
    return 0;
}