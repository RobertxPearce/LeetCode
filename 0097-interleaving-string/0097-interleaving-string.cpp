class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
         n1 = s1.length();
         n2 = s2.length();
         n3 = s3.length();
        
        if(n3 != n1 + n2 ) {
            return false;
        }
        
        memset(dp,-1,sizeof(dp));
        return check(s1,0,s2,0,s3,0);
    }
    
    int n1;
    int n2;
    int n3;
    int dp[101][101];
    bool check(string &s1, int i1 , string &s2,int i2 ,  string &main , int idx ){
        
        if(i1 == n1 && i2 == n2  && idx == n3 ){
            return true;
        }
        if(idx == n3  && (i2 != n2  || i1 != n1 )){
            return false;
        }
        if(dp[i1][i2] != -1){
            return dp[i1][i2];
        }
        if(i1 != n1  && main[idx] == s1[i1]){
            bool b1 = check(s1,i1+1,s2,i2,main,idx+1);
            
            if(b1 == true) {
                dp[i1][i2] = 1;
                return true;
            }
        }
        if(i2 != n2 && main[idx] == s2[i2]){
            bool b1 = check(s1,i1,s2,i2+1,main,idx+1);
            
            if(b1 == true) {
                dp[i1][i2] = 1;
                return true;
            }
        }
        dp[i1][i2] = 0;
        return false;  
    }
};