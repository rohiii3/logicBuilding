class Solution {
public:
    string triangleType(vector<int>& nums) {
        string str;
        bool b;
        if(nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0]){
            b= true;    
        }
        else{
            b= false;
        }

        if(b==true){
            if(nums[0]==nums[1] && nums[0]==nums[2]){
             str= "equilateral";
            }
            else if(nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2]){
                str= "isosceles";
            }
            else{
                str="scalene";
            }
            
        }
        else{
            str="none";
        }
        return str ; 
    }
};