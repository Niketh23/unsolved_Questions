//Brute force solution
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

// Optimal solution
class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int left = 0;
        int ans = 1;
        int count = 0;
        for(int right=1;right<s.length();right++){
            if(s[right]==s[right-1]){
                count++;
            }
            while(count>1){
                if(s[left]==s[left+1]){
                    count-=1;
                }
                left+=1;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};
