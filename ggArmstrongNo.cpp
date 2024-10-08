class Solution {
  public:
    string armstrongNumber(int n) {
        int sum = 0;
        int x = n;
        while (x != 0) {
            int digit = x % 10;
            sum = sum + (digit*digit*digit);
            x /= 10;
        }
        if(n == sum) {
            return "true";
        } return "false";
    }
};