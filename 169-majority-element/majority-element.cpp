class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k;
        for(int num:nums){
            int m=0;
           for(int n:nums){
            if(n==num){
                m++;

            }
           }
           if(m>nums.size()/2){
            k= num;
            break;
           }
        }
        return k;
    }
};