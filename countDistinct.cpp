class Solution {
    public:
        int countDistinctIntegers(vector<int>& nums) {
            set<int> s;
            for(int i: nums)
            {
                s.insert(i);
                s.insert(reverse(i));
            }
            return s.size();
        }
        int reverse(int a)
        {
            string s = to_string(a);
            std::reverse(s.begin(), s.end());
            a = stoi(s);
            return a;
        }
    };