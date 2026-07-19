class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        int max=0;
        int index;
        int count=0;
        for(int m=0;m<nums.size();m++){
            sum+=nums[m];
            if(nums[m]>max){
                max=m;
                index=m;
            }
        }
        if(sum%k==0){
            return 0;
        }
        else if(sum<k){
            for(int num: nums)
                while(num!=0){
                    num+=-1;
                    count++;
                }
        }
        else{
            count=sum%k;
            for(int i=0;i<count;i++){
                nums[index]+=-1;
            }
        }
        return count;
 
    }
};