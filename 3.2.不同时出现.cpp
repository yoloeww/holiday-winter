class Solution {
public:
    bool canPermutePalindrome(string s) {
    int hashtime1[256] = {0};
    int hashtime2[256] = {0};
    if(s.size() % 2 == 0) {
    for (int i = 0 ;i < s.size(); i++)
      hashtime1[s[i]]++;
    for (int i = 0; i < s.size(); i++)
     {
         if (hashtime1[s[i]] % 2 != 0)
        return false;
     }
    return true;
    }
    int flag = 0;
    if(s.size() % 2 == 1) {
    for (int i = 0 ;i < s.size(); i++)
      hashtime2[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++) {
     if(hashtime2[s[i]] == 1)
     flag++;
    }
    if(flag > 2)
    return false;
    else
    return true;
    }
};
