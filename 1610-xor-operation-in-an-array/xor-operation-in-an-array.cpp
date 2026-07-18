class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
        for(int i=0;i<n;i++){
            int k=start+2*i;
            v.push_back(k);
        }
        int result;
        if(v.size()>=2){
            result=v[0]^v[1];
            for(int i=1;i<n-1;i++){
                result=result^v[i+1];  
            }
        }
        return result;
    }
};