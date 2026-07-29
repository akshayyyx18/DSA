class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.size()<k){
            string next="";
            for(auto c:s){
                char next_char =char((int)c+1);
                next+=next_char;
            }
            s+=next;
        }
        return s[k-1];

    }
};