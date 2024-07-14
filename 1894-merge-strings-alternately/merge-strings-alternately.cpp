class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mearged;
        int i =0, j=0;
        while(i<word1.length() && j<word2.length()){
            mearged += word1[i++];
            mearged += word2[j++];
        }
        while(i<word1.length()){
            mearged += word1[i++];
        }
        while(j<word2.length()){
            mearged += word2[j++];
        }
        return mearged;
    }
};