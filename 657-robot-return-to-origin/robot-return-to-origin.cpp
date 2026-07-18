class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int,int> p;
        p={0,0};
        for(int i=0;i<moves.length();i++){
            if(moves.at(i)=='L'){
                p.first+= -1;
            }
            else if(moves.at(i)== 'R'){
                p.first += 1;
            }
            else if(moves.at(i)== 'U'){
                p.second += 1;
            }
            else{
                p.second+= -1;
            }
        }
        if(p.first==0 && p.second==0){
            return true;
        }
        else
            return false;
    }
};