
添加备注


class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if(s1.size() != s2.size())
        return false;
    int hashtime[128] = {0};
    for (int i = 0; i < s1.size(); i++) {
        hashtime[s1[i]]++;
    }
    for (int i = 0; i < s1.size(); i++) {
        hashtime[s2[i]]--;
        if(hashtime[s2[i]] < 0)
        return false;
       }
    return true;
    }
};
