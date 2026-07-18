#include <cctype>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        long total=0;
        for(string i: operations){
            int n;
            int sum=0;
            if(i=="+" && record.size()>=2){
                sum=record[record.size()-1]+record[record.size()-2];
                record.push_back(sum);
            }
            else if(i=="D" && !record.empty()){
                n=record[record.size()-1]*2;
                record.push_back(n);
            }
            else if(i=="C") {
                record.pop_back();
            }
            else{
                n=stoi(i);
                record.push_back(n);  
                }
        }
        for(int m:record){
            total+=m;
        }
        return total;
    }
};