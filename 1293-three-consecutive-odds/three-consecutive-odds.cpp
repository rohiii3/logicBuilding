class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int counter=0;
        if(arr.size()<3)
            return false;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]%2==1){
                if(arr[i+1]%2 !=0 && arr[i+2]%2 != 0){
                counter++;
                break;
                }
            }
            else
                continue;
        }
        if(counter>0)
            return true;
        return false;
    }
};