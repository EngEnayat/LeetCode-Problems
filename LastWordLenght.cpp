#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution {
    public:
        int lengthOfLastWord(string text) {
            if(text.empty()) return 0;
            stack<char> Analyze;
            for(char c : text)
            {
                Analyze.push(c);
            }
            bool start = true;
            int count = 0;
            while(!Analyze.empty())
            {
                if(Analyze.top() == ' ' && start)
                {
                    Analyze.pop();
                    continue;
                }
                else if(!start && Analyze.top() == ' ') 
                {
                    return count;
                }
                else if(Analyze.top()!= ' ') start = false;
                count++;
                Analyze.pop();
            }
            return count;
        }
    };
int main()
{
    string text;
    getline(cin, text);
    Solution s;
    cout << s.lengthOfLastWord(text) << endl;

}