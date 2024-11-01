Problem: https://leetcode.com/problems/delete-characters-to-make-fancy-string

# Delete characters to make fancy string - EASY

# Intuition

# Approach

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int n = s.size();
        if (n <= 2) return s;
        else ans.push_back(s[0]), ans.push_back(s[1]);
        for (int i = 2; i < n; i ++) {
            if (s[i] == s[i-1] && s[i] == s[i-2]) continue;
            else ans.push_back(s[i]);
        }
        return ans;
    }
};
```
