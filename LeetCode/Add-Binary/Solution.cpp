1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.size() - 1;
5        int j = b.size() - 1;
6        int carry = 0;
7
8        string result = "";
9
10        while (i >= 0 || j >= 0 || carry) {
11            int sum = carry;
12
13            if (i >= 0) sum += a[i--] - '0';
14            if (j >= 0) sum += b[j--] - '0';
15
16            result += (sum % 2) + '0';
17            carry = sum / 2;
18        }
19
20        reverse(result.begin(), result.end());
21        return result;
22    }
23};
24