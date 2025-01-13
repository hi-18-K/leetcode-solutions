### Problem: https://leetcode.com/problems/gas-station/description/?envType=company&envId=bitgo&favoriteSlug=bitgo-six-months

```
CPP
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) {
            return -1;
        }
        int n = gas.size();
        vector<int> values;
    
        for (int i = 0; i < n; i ++) {
            values.push_back(gas[i] - cost[i]);
        }

        for (int i = 0; i < n; i ++) {
            values.push_back(gas[i] - cost[i]);
        }
        n = values.size();
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i ++) {
            if (sum + values[i] >= 0) {
                sum += values[i];
            } else {
                ans = i +1;
                sum = 0;
            }
           
        }
        if (ans >= gas.size()) return -1;
        return (ans % (gas.size()));
    }
};
```
