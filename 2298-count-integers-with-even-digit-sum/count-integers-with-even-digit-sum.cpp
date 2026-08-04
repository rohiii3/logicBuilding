class Solution {
public:
    int countEven(int num) {
        int c=0;
        for(int i=2;i<=num;i++){
            int temp=i;
            long sum=0;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            if(sum % 2==0){
                c++;
            }
        }
        return c;     
    }
};