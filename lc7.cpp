class Solution {
public:
    int reverse(int x) {

        int revno = 0;

        // bool negative = false;
        // if( x < 0 )  negative = true;
        // if(negative) {
        //     x = x * -1;
        // }
        while( x != 0 ) {
            int lastdigit = x % 10; // getting the last digit
            x = x / 10; // removing the last digit  
             if(revno > INT_MAX/10 || (revno == INT_MAX/10 && lastdigit > 7))return 0;
            if(revno < INT_MIN/10 || (revno == INT_MIN/10 && lastdigit < -8)) return 0;

            revno = (revno*10) +  lastdigit;  // adding the last digit to the revno
           
        }
        // if(negative) {
        //     revno = revno * -1;
        // }
        return revno;
    }
};