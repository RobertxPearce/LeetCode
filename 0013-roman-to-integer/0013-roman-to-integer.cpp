class Solution {
public:
    int romanToInt(string s) {
        
        int i = 0;
        string l;
        int value = 0;
        
        while (i < s.size()) {
            l = s.at(i);
            
            // if I
            if (l == "I") {
                
                value += 1;
            
            // if V
            } else if (l == "V") {
                
                if (i > 0 && s[i-1] == 'I') {
                    value = value + 5 - 2;
                }
                else {
                    value = value + 5;
                }
            
            // if X
            } else if (l == "X") {
                
                if (i > 0 && s[i-1] == 'I') {
                    value = value + 10 - 2;
                }
                else {
                    value = value + 10;
                }
            
            // if L
            } else if (l == "L") {
                
                if (i > 0 && s[i-1] == 'X') {
                    value = value + 50 - 20;
                }
                else {
                    value = value + 50;
                }
                
            // if C
            } else if (l == "C") {
                
                if (i > 0 && s[i-1] == 'X') {
                    value = value + 100 - 20;
                }
                else {
                    value = value + 100;
                }
            
            // if D
            } else if (l == "D") {
                
                if (i > 0 && s[i-1] == 'C') {
                    value = value + 500 - 200;
                }
                else {
                    value = value + 500;
                }
            
            // if M
            } else if (l == "M") {
                
                if (i > 0 && s[i-1] == 'C') {
                    value = value + 1000 - 200;
                }
                else {
                    value = value + 1000;
                }
                
            }
            
            i++;
        }
        
        return value;
    }
};