

# Intuition
Maintain a monotonically decreasing stack for insertion as we add new element in the sliding window(head) and a queue for deletion of element as we remove one element from the back/tail of sliding window.

# Approach
maintain a monotonically decreasing dequeue.

# Complexity
- Time complexity:
O(n)
- Space complexity:
O(k)

# Code
```cpp []
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int n = nums.size();
        int cnt = 0, i = 0;
         for (cnt = 0, i = 0; cnt < k && cnt < n; cnt ++, i ++) {
            while (dq.empty() == false && dq.back() < nums[i]) {
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        ans.push_back(dq.front()); 
        if (cnt >= n) return ans;
        for (int i = k; i < n; ) {
            while (dq.empty() == false && dq.back() < nums[i]) {
                dq.pop_back();
            }
            dq.push_back(nums[i++]);
            if (dq.front() == nums[i - k - 1]) {
                dq.pop_front();
            }
            ans.push_back(dq.front());
        }
        return ans;
    }
};
```
