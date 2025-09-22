class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
            MergeSort(nums1, 0, nums1.size()-1);
            
            if(nums1.size()%2 != 0)
            {
                int mid = nums1.size() /2;
                return nums1[mid];
            }
            int mid = nums1.size()/2;
            return (nums1[mid] + nums1[mid-1])/2.0;
        }
        void MergeSort(vector<int> &nums, int left, int right)
        {
            if(right > left){
                int middle = left + (right - left) / 2;
                MergeSort(nums, left, middle);
                MergeSort(nums, middle+1, right);
                Merge(nums, left, middle, right);
            }
        }
        void Merge(vector<int> &nums, int start, int middle, int right)
        {
            int n1 = middle - start +1;
            int n2 = right - middle;
            vector<int> L(n1), R(n2);
            for(int i =0; i<n1; i++)
            {
                L[i] = nums[start + i];
            }
            for(int i=0; i<n2;i++)
            {
                R[i] = nums[middle + 1 + i];
            }
            int i, j, k;
            i = j = 0;
            k = start;
            while(i< n1 && j < n2)
            {
                if(L[i] <= R[j])
                {
                    nums[k] = L[i];
                    i++;
                }
                else{
                    nums[k] = R[j];
                    j++;
                }
                k++;
            }
            while(i < n1){
                nums[k] = L[i];
                k++;
                i++;
            }
            while(j < n2){
                nums[k] = R[j];
                j++;
                k++;
            }
        }
    };