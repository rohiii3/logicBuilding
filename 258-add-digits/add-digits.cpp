class Solution {
public:
    int addDigits(int num) {
        int last;
        int newnum =num;
        while(newnum >9){
            int temp=newnum;
            int sum=0;
            while(temp>0){
                last=temp%10;
                temp=temp/10;
                sum+=last;
                newnum= sum;
            }
            
        } 
        return newnum;
        
    }
};