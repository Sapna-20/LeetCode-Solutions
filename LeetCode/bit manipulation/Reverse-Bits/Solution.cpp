1class Solution {
2public:
3    uint32_t reverseBits(uint32_t n) {
4        uint32_t res = 0;
5
6        for (int i = 0; i < 32; i++) {
7            res = (res << 1) | (n & 1); // take last bit
8            n >>= 1;                   // remove last bit
9        }
10
11        return res;
12    }
13};
14