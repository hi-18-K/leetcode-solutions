# Problem: Delete characters to make fancy string [https://leetcode.com/problems/delete-characters-to-make-fancy-string] - EASY

## Intuition
We need to remove the characters which are same as previous two characters.

## Approach
Create an empty answer string. Iterate the input string - if current character is same as previous two characters, skip adding it to the answer string otherwise add the current character to answer string

## Complexity
- Time complexity:
O(n)

- Space complexity:
O(n)

## Code
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
