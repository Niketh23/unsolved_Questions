class Solution {
public:
    string smallestString(string s) {
        string ans = "";
        int n = s.length();
        bool found = false;
        for (int i = 0; i < n; i++) {
            char curr = s[i];
            if (curr != 'a' && !found) {
                found = true;
                while (i < n) {
                    curr = s[i];
                    if (curr != 'a') {
                        curr--;
                        ans += curr;
                    } else {
                        i--;
                        break;
                    }
                    i++;
                }
            } else {
                ans += curr;
            }
        }
        if (!found) {
            ans = "";
            for (int i = 0; i < n - 1; i++) {
                ans += s[i];
            }
            ans += 'z';
        }
        return ans;
    }
};
