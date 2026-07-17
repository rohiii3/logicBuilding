class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        while(nums.size()>0){
            int min=1000;
            int min2=1000;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=min){
                    min2=min;
                    min=nums[i];
                }
                if(nums[i]>min && nums[i]<min2){
                    min2=nums[i];
                }  
            }
            nums.erase(find(nums.begin(), nums.end(), min));
            nums.erase(find(nums.begin(), nums.end(), min2));
            arr.push_back(min2);
            arr.push_back(min);
            
        }
        return arr;
    }

};