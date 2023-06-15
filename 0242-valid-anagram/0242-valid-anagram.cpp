#include <algorithm>
#include <unordered_map>

class Solution {
    
public:
    bool isAnagram(string s, string t) {
    
    bool flag = true;
    unordered_map<char, int> Map1, Map2;
    char key;

    if(s.size()!=t.size())
    return false;

    for (int i = 0; i < t.length(); i++) {
        // first string
        if (Map1.count(t[i]))
            Map1[t[i]]++;
        else
            Map1[t[i]];

        // second string
        if (Map2.count(s[i]))
            Map2[s[i]]++;
        else
            Map2[s[i]];
    }

    for (auto& num : Map1) {
        key=num.first;
        if (!Map2.count(key) || Map1[key] != Map2[key]) {
            flag = false;
            break;
        }
    }

    if (flag)
        return true;
    else
        return false;


}
};