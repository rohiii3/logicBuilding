class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        
        for(int i=0;i<sentences.size();i++){
            string temp;
            vector<string> v;
            stringstream ss(sentences[i]);
            while(getline(ss,temp,' ')){
                v.push_back(temp);
            }
            if(v.size() >max){
                max=v.size();
            }
        }
        return max;
    }
};