class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5=0,cnt10=0,cnt20=0;
        for(int bill:bills){
            if(bill==5) cnt5++;
            else if(bill==10){
                cnt10++;
                if(cnt5){
                    cnt5--;
                }
                else return false;
            }
            else{
                cnt20++;
                if(cnt10 && cnt5){
                    cnt10--;
                    cnt5--;
                }
                else if(cnt5>=3) cnt5-=3;
                else return false; 
            }
        }
        return true;
    }
};