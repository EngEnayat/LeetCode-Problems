class Solution {
    public:
        int maximumEnergy(vector<int>& energy, int k) {
            int n = energy.size();
            if(n== 0) return 0;
            unordered_map<int,int> um;
            for(int i=0; i<n; i++)
            {
                if(i < k) um[i] = energy[i];
                else{
                    int index = abs(i - k);
                    if((i + k) < n && um[index] >= 0) um[i] = um[index] + energy[i];
                    else um[i] = (um[index] >= 0 ? um[index] + energy[i] : energy[i]);
                }
            }
            int i = n - k;
            long long res = INT_MIN;
            for(i; i< n; i++)
            {
                res = max((int)res, um[i]);
            }
            return res;
        }
    };