class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                if(i*j%k==0 && i<j && nums[i]==nums[j] ){
                    count++;
                }
            }
        }
        return count;
    }
};