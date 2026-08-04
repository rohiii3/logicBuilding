class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        v=nums2;
        for(int i=0;i<m;i++)
            v.push_back(nums1[i]);
        sort(v.begin(), v.end());
        nums1=v;
        
    }
};