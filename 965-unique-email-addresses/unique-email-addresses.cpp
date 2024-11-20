class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>unique;
        for(string email:emails){
            string local,domain;
            int ind=email.find('@');
            local=email.substr(0,ind);
            domain=email.substr(ind);

            string local_part;
            for(char c: local){
                if(c=='+') break;
                if(c!='.') local_part+=c;
            }

            unique.insert(local_part+domain);
        }
        return unique.size();
    }
};