class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int low=0,high=n-1;

        while(low<high){
            while(low<high && !(s[low] == 'a' || s[low] == 'e' || s[low] == 'i' || s[low] == 'o' || s[low] == 'u'||
            s[low] == 'A' || s[low] == 'E' || s[low] == 'I' || s[low] == 'O' || s[low] == 'U')) {
                low++;
            }
            while(low <high && !(s[high] == 'a' || s[high] == 'e' || s[high] == 'i' || s[high] == 'o' || s[high] == 'u'||
            s[high] == 'A' || s[high] == 'E' || s[high] == 'I' || s[high] == 'O' || s[high] == 'U')) {
                high--;
            }
            if(low<high){
            char temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;
            high--;
            }
        }
        return s;
        
    }
};