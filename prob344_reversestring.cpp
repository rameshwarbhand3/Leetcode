#include<iostream>
#include<string.h>
using namespace std;
void reversestring(string a){


int len=a.length();
 
 while(len--){
  cout<<a[len];
 }
}

int main(){


   string a="ram";

  
   reversestring(a);
   
   
    return(0);
}