#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
    public:
        bool isAnagram(string str1, string str2) {
            if(str1.length() != str2.length()) return false;
            int count[26] = {0};
            for(int i=0; i< str1.size();i++)
            {
                count[str1[i]- 'a']++;
                count[str2[i] - 'a']--;
            }
            for(int i=0; i<26;i++)
                if(count[i]!= 0) return false;
            return true;
        }
    };
int main()
{

    return 0;
}
