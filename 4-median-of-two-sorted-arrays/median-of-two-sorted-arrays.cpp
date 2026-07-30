class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        double n;
        v=nums1;
        for(int num:nums2){
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        if(v.size()%2==0){
            n=(v[(v.size()/2)]+v[(v.size()/2)-1])/2.0;
        }
        else
            n=v[(v.size()/2)];
        return n;
    }  
};