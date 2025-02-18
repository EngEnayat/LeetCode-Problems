#include <iostream>
#include <queue>
#include <string>

using namespace std;
class QueueImplement
{
public:
    void reverse(string s)
    {
        queue <char> text;
        int num = s.length();
        for(char c : s)
        {
            text.push(c);
        }
        while(!text.empty())
        {
            cout << text.back();
            text.pop();
        }
        cout << endl;
    }
};
int main(void)
{
    string s;
    getline(cin, s);
    QueueImplement obj;
    obj.reverse(s);
    return 0;
}