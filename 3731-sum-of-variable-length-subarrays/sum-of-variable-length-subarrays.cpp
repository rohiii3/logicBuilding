class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int s = 0;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> v;
            int j = max(0, i - nums[i]);
            for (; j <= i; j++) {
                v.push_back(nums[j]);
            }
            int sum = 0;
            for (int num : v) {
                sum += num;
            }
            s += sum;
        }
        return s;
    }
};