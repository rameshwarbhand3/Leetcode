#include<iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;
        int remainder;
        int n =x;
        while (n != 0)
        {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
        }
        

        if (n < 0)
        {
            return rev * (-1);
        }
        else
        {
            return rev;
        }
    }
};
int main(){
    Solution sol;
   cout<<"result: "<<sol.reverse(-123)<<endl;
   int a = 2147483648;
   cout<<a<<endl;
   cout<<INT16_MAX;
}