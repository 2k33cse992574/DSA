class Solution {
public:
    int myAtoi(string s) {
        int x;
        long long sum=0;
        int t=1;
        string ans="";
        int j=0,n=s.size();
        int sign=1;
        while(j<n && s[j]==' ')
        {
            j++;
        }
        if(j<n && ((s[j]=='+')||(s[j]=='-')))
        {
            sign=(s[j]=='-')?-1:1;
            j++;
        }
        int k=j;
       while(k<n&& isdigit(s[k]))
       {
        sum=sum*10+(s[k]-'0');
        if((sum*sign)>=INT_MAX)  return INT_MAX;
        if((sum*sign)<=INT_MIN)  return INT_MIN;
        k++;
       }
        return (int)sum*sign;
    }
};