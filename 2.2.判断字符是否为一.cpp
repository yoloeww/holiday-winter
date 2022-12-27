class Solution {
public:
    bool isUnique(string astr) {
    int hashTime[256] = {0};
    for (int i = 0;i < astr.size(); i++) {
        hashTime[astr[i]]++;
    }
    for (int i = 0;i < astr.size(); i++) {
        if(hashTime[astr[i]] > 1) {
            return false;
        }
    }
return true;
    }
};
