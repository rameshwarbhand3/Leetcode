class Solution
{
public:
int divide(int dividend,  int divisor)
    {
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
      int quotient = 0;
        while (dividend >= divisor)
        {
            dividend -= divisor;
            ++quotient;
        }
        if (quotient <= INT_MIN)
        {
            quotient = INT_MIN;
        }
        else if (quotient >= INT_MAX)
        {
            if(sign==-1){
                quotient = INT_MIN;
            }
            else{
             quotient = INT_MAX;
            }
        }
        return quotient * sign;
    }
};