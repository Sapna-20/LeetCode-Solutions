class Solution {
public:
    bool canConstruct(string ranNote, string magazine) {
        if(ranNote.size() > magazine.size())
            return false;
        vector<int> freq(26,0);
        for(int i = 0; i < magazine.size(); i++)
            freq[magazine[i]-'a']++;
        for(int i = 0; i < ranNote.size(); i++) 
            if(freq[ranNote[i]-'a'])
                freq[ranNote[i]-'a']--;
            else
                return false;
        return true;
    }
};