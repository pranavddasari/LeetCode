class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.length();
        string t;
        for(int i = 0; i<l; i++)
        {
            if(isalnum(s[i]))
            {
                t+= tolower(s[i]);
            }
        }
        int len = t.length();
        int h = len/2;
        for(int i = 0; i<h; i++)
        {
            if(t[i] != t[len-1-i])
            {
                return false;
            }
        }
        return true;
    }
};