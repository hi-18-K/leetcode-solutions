# [Problem](https://leetcode.com/problems/circular-sentence): Circular sentence - EASY

## Intuition
A circular string is a string in which first character of every word is same as last character of the previous word. Words in sentance are separated by a single space.

## Approach
Iterate the input string. If we find a space - we have one word to the left of it, and one word to the right of it. 
  - If the last character of previous word (ie. last character before the space) is not same as the fist character of the current word (ie. first character after space), the string is not circular.
  - If the first character of first word (first character of string) is not same as last character of last word (last character of string), the string is not circular.
  - In all the other cases, the string is circular.

## Complexity
- Time complexity:
O(n) - where n is the size of string.

- Space complexity:
  0 - no additional space is required.

## Code
C++ : 
```cpp []
class Solution {
public:
    bool isCircularSentence(string s) {
        int n = s.size();
        for (int i = 0; i < n; i ++) {
            if (s[i] == ' ') {
                if (s[i-1] != s[i+1]) return false;
            }
        }
        if (s[n-1] != s[0]) return false;
        return true;
    }
};
```
