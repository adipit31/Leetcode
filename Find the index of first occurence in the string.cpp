class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int s = haystack.size();
        int n = needle.length();
        for(int i=0;i <= s-n;i++)
        {
            if(haystack.substr(i,n)== needle)
            {
                return i;
            }
        }
        return -1;
    }
};           
