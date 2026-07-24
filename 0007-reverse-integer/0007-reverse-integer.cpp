class Solution {
public:
    int reverse(int x) {
        long result = 0;
        if(x>0)
        {
            long t = x;
            while(t>0)
            {
                int digit = t % 10;
                if (result > INT_MAX/10)
                {
                    return 0;
                }
                result = result * 10 + digit;
                t = t / 10;
            }
            return (int)result;
        }
        if(x<0)
        {
            long t = x;
            t = -t;
            while(t>0)
            {
                int digit = t % 10;
                if (result > INT_MAX / 10)
                {
                    return 0;
                }
                if (result < INT_MIN / 10)
                {
                    return 0;
                }
                result = result * 10 + digit;
                t = t / 10;
            }
            return -(int)result;
        }
        return (int)result;
    }
};