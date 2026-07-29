class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        vector<int> v;
        v=nums;
        v.push_back(nums[0]);
        int max=0;
        for(int i=0;i<v.size()-1;i++){
            if(abs(v[i]-v[i+1])>max){
                max=abs(v[i]-v[i+1]);
            }
        }
        return max;
    }
};