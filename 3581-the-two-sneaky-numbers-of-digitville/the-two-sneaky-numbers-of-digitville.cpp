class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> p;
       for(int num:nums){
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(num==nums[i]){
                count++; 
            }    
        }
        if(count>1 && p.size()<2){
            p.push_back(num);
            erase(nums,num);
        }
       }
       return p;  
    }
};