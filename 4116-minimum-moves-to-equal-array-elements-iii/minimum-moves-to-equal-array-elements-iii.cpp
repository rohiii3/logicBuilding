class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        for(int num:nums){
            if(num<max){
                while(num!=max){
                    num+=1;
                    count++;
                }

            }
        }
        return count;
    }
};