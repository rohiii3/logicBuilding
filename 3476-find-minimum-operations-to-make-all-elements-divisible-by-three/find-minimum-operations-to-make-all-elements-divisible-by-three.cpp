class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int counter=0;
        for(int num : nums){
            if(num%3==1){
                num-=1;
                counter++;
            }
            else if(num%3==2){
                num+=1;
                counter++;
            }
            
        }
        return counter;
    }
};