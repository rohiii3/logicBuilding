class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        vector<int> single;
        vector<int> doubled;
        int single_sum=0;
        int double_sum=0;
        for(int e:nums){
            int digit=log10(e)+1;
           if(digit==1){
            single.push_back(e);
           }
           else{
            doubled.push_back(e);
           }
        }
        for(int num:single){
            single_sum+=num;
        }
        for(int dum:doubled){
            double_sum+=dum;
        }
        if(single_sum==double_sum)
            return false;
        else
            return true;
    }
};