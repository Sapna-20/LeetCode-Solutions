1class Solution {
2public:
3    int trap(vector<int>& height) {
4
5        int n = height.size();
6
7        int left = 0;
8        int right = n - 1;
9
10        int leftMax = 0;
11        int rightMax = 0;
12
13        int water = 0;
14
15        while (left < right) {
16
17            // If left side is smaller
18            if (height[left] < height[right]) {
19
20                if (height[left] >= leftMax)
21                    leftMax = height[left];   // update max
22                else
23                    water += leftMax - height[left]; // store water
24
25                left++;
26            }
27            else {
28
29                if (height[right] >= rightMax)
30                    rightMax = height[right]; // update max
31                else
32                    water += rightMax - height[right]; // store water
33
34                right--;
35            }
36        }
37
38        return water;
39    }
40};