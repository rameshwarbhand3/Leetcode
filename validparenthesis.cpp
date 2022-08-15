 #include<iostream>
 #include<stdlib.h>
 using namespace std;

 class Solution {
public:
    bool isValid(string s) {
            Stack<char> s;
        
            for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]==']')
            s.push(s[i]);
                
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
            if (s.empty())
            return false;
                
            else if(s[i]==')'&& s.top()!='(')
            return false;
                
            else if(s[i]=='{'&& s.top()!='}')
            return false;
                
            else if(s[i]==']'&& s.top()!='[')
            return false;
                
            else
                    s.pop();
        }
        }
           if(s.empty())
            return true;
        
            else
            return false;
    }
};