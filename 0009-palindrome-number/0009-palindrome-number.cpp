class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        {
            return false;
        }
        else
        {
            int rev = 0;
            int t = x;
            while(x>0)
            {
                int digit = x % 10;
                if(rev > INT_MAX / 10)
                {
                    return false;
                }
                rev = rev * 10 + digit;
                x = x/10;
            }
            if(rev == t)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};