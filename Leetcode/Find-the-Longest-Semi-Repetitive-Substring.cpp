class Solution {
public:
    bool isvalid(string &s1){
        int pair =0;
        for(int i=0;i<s1.length()-1;i++){
            if(s1[i]==s1[i+1]){
                pair++;
            }
        }
        return pair<=1;
    }
    int longestSemiRepetitiveSubstring(string s) {
        int ans = 0;
        for(int i=0;i<s.length();i++){
            string s1="";
            for(int j=i;j<s.length();j++){
                s1=s1+s[j];
                if(isvalid(s1)){
                    ans = max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};
