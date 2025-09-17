
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // negative numbers are not palindromes

        long long int rev = 0;
        int original = x; // store original x

        while (x != 0) {
            int digit = x % 10;            
            rev = (rev * 10) + digit;
            x = x / 10;
        }

        return rev == original; // compare reversed with original
    }
};
