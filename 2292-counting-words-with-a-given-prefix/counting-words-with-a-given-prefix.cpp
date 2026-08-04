class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(string s:words){
            if(pref.length()>s.length()){
                continue;
            }
            int c=0;
            for(int i=0;i<pref.length();i++){
                if(s.at(i)==pref.at(i)){
                    c++;
                }
                else
                    break;
            }
            if(c==pref.length()){
                count++;
            }
        }
        return count;  
    }
};