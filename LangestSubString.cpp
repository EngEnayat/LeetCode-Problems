class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            deque<char> dq;
            set<char> st;
            int MaxLen = 0;
            for(int i=0; i<s.size(); i++)
            {
                while(st.count(s[i]) && !dq.empty())
                {
                    st.erase(dq.front());
                    dq.pop_front();
                }
                st.insert(s[i]);
                dq.push_back(s[i]);
                MaxLen = max(MaxLen, (int)dq.size());
            }
            return MaxLen;
        }
    };