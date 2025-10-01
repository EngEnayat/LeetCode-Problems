class Solution {
    public:
        int maxArea(vector<int>& h) {
            int l =0, r = h.size()-1;
            int area =0;
            while(r >= l)
            {
                int NewArea = (r - l) * min(h[l], h[r]);
                area = max(area, NewArea);
                if(h[l] < h[r]) l++;
                else r--;
            }
            return area;
        }
    };