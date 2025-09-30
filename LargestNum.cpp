struct big {
    bool operator()(const string &a, const string &b) const {
       return a+ b < b + a;
    }
};

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        priority_queue<string, vector<string>, big> pq;
        for(int i: nums)
        {
            string s = to_string(i);
            pq.push(s);
        }
        string res = "";
        while(!pq.empty())
        {
            res += pq.top();
            cout << pq.top() << endl;
            pq.pop();
        }
        return (res[0] == '0') ? "0" : res;
    }
};