    #include<iostream>
    #include<string.h>
    #include<stdlib.h>
    using namespace std;
    
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
              reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
        
    }

int main(){
    string s="I am a ram";
    reversewords(s);
    cout<<" "<<s<<endl;
    return (0);
}