class Solution {
public:
    int digitsum(int n) {
        int temp, sum = 0;
        while (n) {
            temp = n % 10;
            sum += temp * temp;
            n = n / 10;
            
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow, fast;
        slow = fast = n;
        do {
            slow = digitsum(slow);
            fast = digitsum(fast);
            fast = digitsum(fast);
        } while (slow != fast);
        if (slow == 1)
            return true;
        else
            return false;
    }
};