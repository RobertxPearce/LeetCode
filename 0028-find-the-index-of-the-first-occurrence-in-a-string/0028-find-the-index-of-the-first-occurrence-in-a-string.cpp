class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int haystackSize = haystack.size();
        int needleSize = needle.size();
        int i = 0;
        int j = 0;
        int ind = 0;
        
        while(i < haystackSize && j < needleSize) {
            
            ind = i;
            
            while(i < haystackSize && j < needleSize &&
                  haystack[i] == needle[j]) {
                
                i++;
                j++;
            }
            
            if(j >= needleSize) {
                return ind;
                
            } else {
                j = 0;
                i = ind + 1;
            }
        }
        return -1;
    }
};