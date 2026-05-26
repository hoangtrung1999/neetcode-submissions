class Solution {
public:
    bool isAnagram(string s, string t) {
        int size = s.size();
        map<char, int> map_s;
        for (int i = 0; i < size; i++)
        {
            if (map_s[s[i]] > 0)
            {
                map_s[s[i]] = map_s[s[i]] + 1;
            }
            else
                map_s[s[i]] = 1;
        }
        size = t.size();
        map<char, int> map_t;
        for (int i = 0; i < size; i++)
        {
            if (map_t[t[i]] > 0)
            {
                map_t[t[i]] = map_t[t[i]] + 1;
            }
            else
                map_t[t[i]] = 1;
        }
        if (s.size() != t.size())
            return false;
        else
        {
            size = map_s.size();
            for (auto keyChar : map_s)
            {
                char key = keyChar.first;
                int occur = keyChar.second;
                if (map_t[key] != occur)
                    return false;
            }
            return true;
        }
    }
};
