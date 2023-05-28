class Solution {
public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        vector<string> result;
        for (string word : Dictionary) {
            int i = 0, j = 0;
            bool isMatch = true;
            while (i < word.size() && j < Pattern.size()) {
                if (isupper(word[i])) {
                    if (word[i] != Pattern[j]) {
                        isMatch = false;
                        break;
                    }
                    j++;
                }
                i++;
            }
            if (isMatch && j == Pattern.size()) {
                result.push_back(word);
            }
        }
        if (result.empty()) {
            result.push_back("-1");
        }
        return result;
    }
};