#include <bits/stdc++.h> 
int longestPalindromeSubsequence(string s)
{
    // Write your code here.
    if(s.length() <= 1) return s.length();
    int len = -1;
    map<char,vector<int>> m;
    int slen = s.length(), si, ei, max = 0;
    for(int i = 0; i < slen; i++)
    {
        if(m.find(s[i]) == m.end())
        {
            vector<int> v;
            v.push_back(i);
            v.push_back(0);
            m[s[i]] = v;
        }
        else
        {
            vector<int> &v = m[s[i]];
            if(v[1] < i) v[1] = i;
        }
    }
    int diff = 0;
    for(auto i: m)
    {
        vector<int> v = i.second;
        diff = v[1] - v[0];
        if(max < diff)
        {
            max = diff;
            si = v[0];
            ei = v[1];
            
              len = 2;
        }
    }
    if(len > -1)
    {
        for (int i = si + 1, j = ei - 1; i <= j; ) 
        {
            if (s[i] == s[j])
            {
                len++;
                i++;
                j--;
            } 
            else if(s[i + 1] == s[j])
            {
                i++;
                len++;
            }
            else if(s[i] == s[j + 1])
            {
                j--;
                len++;
            }
            else
            {
                i++;
                j--;
            }
        }
    }
    return len;
}
