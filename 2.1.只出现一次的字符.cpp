class Solution {
public:
    int FirstNotRepeatingChar(string str) {
    int num[256] = {0};
    for(int i = 0;i < str.size();i++) {
        num[str[i]]++;
    }
    for(int i = 0;i < str.size();i++) {
        if(num[str[i]] == 1)
        return i;
    }
    return -1;
    }
};
