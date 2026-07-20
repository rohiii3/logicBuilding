class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> v;
        for(int num:order){
            for(int i=0;i<friends.size();i++){
                if(num==friends[i]){
                    v.push_back(num);
                }
            }
        }
        return v;
    }
};