class Solution {
    public:
        vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
            sort(potions.begin(), potions.end());
            vector<int> result;
            for(int i=0; i<spells.size(); i++)
            {
                double comp = (double)success / spells[i];
                int index = lower_bound(potions.begin(), potions.end(), comp) - potions.begin();
                if(index < potions.size()) 
                    result.push_back(potions.size() - index);
                else result.push_back(0);
            }
            return result;
        }
    };