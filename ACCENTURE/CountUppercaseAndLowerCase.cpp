/*
Given a string you are requested to determine whether
the string should be converted to all uppercase or all
lowercase, depending on the count of uppercase
and lowercase letter in that string.
Example 1: Example 2:
AbCdEfG xYz
Output 1: Output 2:
ABCDEFG xyz
*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int upr_cnt=0;
    int lwr_cnt=0;

    for (int i=0;i<s.length();i++){
        if(s[i]>=65 and s[i]<=90){
            upr_cnt++;
        }
        if(s[i]>=97 and s[i]<=122){
            lwr_cnt++;
        }

    }
    if(lwr_cnt>upr_cnt){
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 and s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }
    if(upr_cnt>lwr_cnt){
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 and s[i]<=122){
                s[i]=s[i]-32;
        }
    }
}
cout<<s<<endl;
}