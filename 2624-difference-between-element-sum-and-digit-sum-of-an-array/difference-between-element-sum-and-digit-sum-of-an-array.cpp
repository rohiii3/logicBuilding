class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        int digsum=0;
        for(int element: nums){
            elesum+= element;
            while(element>0){
                int digit=0;
                digit=element%10;
                digsum+=digit;
                element/=10;
            }

        }
        return abs(elesum-digsum);
        
    }
};