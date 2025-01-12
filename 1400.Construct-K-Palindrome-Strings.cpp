
# [Problem](https://leetcode.com/problems/construct-k-palindrome-strings/description/):1400. Construct K Palindrome Strings - MEDIUM

### Detailed explanation: [YouTube](-)
## Intuition
ength substring.

## Approach


## Complexity


## Code
C++ : 
```cpp []
class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if (k > n) return false;
        // if (k == n) return true;
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i ++) {
            freq[s[i] - 'a'] ++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i ++) {
            if (freq[i] & 1) {
                cnt ++;
            }
        }
        if (cnt <= k) return true;
        return false;
    }
};
```
