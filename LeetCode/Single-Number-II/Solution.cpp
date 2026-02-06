1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        
5        int answer = 0;
6
7        // check every bit (0 to 31)
8        for(int i = 0; i < 32; i++) {
9
10            int count = 0;
11
12            // count ith bit in all numbers
13            for(int num : nums) {
14                if((num >> i) & 1) {
15                    count++;
16                }
17            }
18
19            // if bit is not multiple of 3
20            if(count % 3 != 0) {
21                answer = answer | (1 << i);
22            }
23        }
24
25        return answer;
26    }
27};
28