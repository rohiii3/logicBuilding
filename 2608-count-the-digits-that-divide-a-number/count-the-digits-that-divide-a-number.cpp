class Solution {
public:
    int countDigits(int num) {
        int counter=0;
        vector<int> v;
        int temp;
        temp=num;
        while (num>0){
            int digit;
            digit=num%10;
            num=num/10;
            v.push_back(digit);
        }
        for(int i=0;i<v.size();i++){
            if(temp%v[i]==0){
                counter++;
            }
        }
        return counter; 
    }
};