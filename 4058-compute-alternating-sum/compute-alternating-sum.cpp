class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int oddsum=0;
        int evensum=0;

        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                evensum+=nums[i];
            }
            else
                oddsum+=nums[i];
        }
        return evensum-oddsum;
    }
};