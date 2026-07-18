class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(int num:nums){
            int sqr;
            sqr=num*num;
            v.push_back(sqr);
        }
        sort(v.begin(),v.end());
        return v;
    }
};