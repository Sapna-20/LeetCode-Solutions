#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> answer;

        int n = words.size();
        int i = 0;

        // We process words one line at a time
        while (i < n) {

            int j = i;
            int lineLength = 0;

            // Step 1: Find how many words fit in this line
            while (j < n &&
                   lineLength + words[j].length() + (j - i) <= maxWidth) {

                lineLength += words[j].length();
                j++;
            }

            // Now words from i to j-1 will be in one line
            int totalWords = j - i;

            // Count total spaces we need
            int totalSpaces = maxWidth - lineLength;

            string line = "";

            // Step 2: If last line OR only one word → left align
            if (j == n || totalWords == 1) {

                for (int k = i; k < j; k++) {
                    line += words[k];

                    if (k < j - 1)
                        line += " ";
                }

                // Add remaining spaces at end
                while (line.length() < maxWidth) {
                    line += " ";
                }
            }

            // Step 3: Normal justified line
            else {

                int gaps = totalWords - 1;

                int spaceEach = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for (int k = i; k < j; k++) {

                    line += words[k];

                    if (k < j - 1) {

                        int spaces = spaceEach;

                        if (extra > 0) {
                            spaces++;
                            extra--;
                        }

                        line += string(spaces, ' ');
                    }
                }
            }

            answer.push_back(line);

            // Move to next group of words
            i = j;
        }

        return answer;
    }
};