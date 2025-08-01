#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution {
    public:
        int reverse(int x) {
            string Number = to_string(x);
            
            stack<char> Reversed;
            bool IsNegative = false;
            if(Number[0] == '-') IsNegative = true;
            if(IsNegative && Number.size()> 12){
                return 0;
            }
            if(Number.size() > 11) return 0;
            for(char c: Number)
            {  
                if(c == '-') continue;
                Reversed.push(c);
            } 
            bool start = true;
            long long int result = 0;;
            while(!Reversed.empty())
            {
                if(start && Reversed.top() == '0'){
                    Reversed.pop();
                    continue;
                }
                else if(Reversed.top() != '0') start = false;
                result *= 10;
                result += Reversed.top()-'0';
                Reversed.pop();
            }
            if(IsNegative) result = -result;
            //if(result < INT_MIN || result > INT_MAX) return 0;
            return result;
        }
    };
int main()
{
    Solution s;
    int i;
    cin >> i;
    s.reverse(i);
    cout << s.reverse(i) << endl;

}