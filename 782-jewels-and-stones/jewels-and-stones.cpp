class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int j=0;j<jewels.length();j++){
            for(int i=0;i<stones.length();i++){
                if(jewels.at(j)==stones.at(i)){
                    count++;
                }
            }
            
        }
        return count;
    }
};