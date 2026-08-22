class Solution {
public:
    bool checkDivisibility(int n) {
        vector<int> v;
        int m=n;
        while(m>0){
            v.push_back(m%10);
            m=m/10;
        }
        int digisum=0;
        int digiproduct=1;
        for(int num:v){
            digisum+=num;
            digiproduct*=num;
        }
        if(n%(digisum+digiproduct)==0)
            return true;
        return false;
    }
};