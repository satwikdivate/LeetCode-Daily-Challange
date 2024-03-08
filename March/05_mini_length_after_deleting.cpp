#include<bits/stdc++.h>
 using namespace std;
int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        if(s.size()==2){
            if(s[0]==s[1])
                return 0;
            else
                return 2;
        }


        while(i<j){

            if(s[i]==s[j]){

                char ch=s[i];
                i++;
                while(i<j && s[i]==ch)
                    i++;
                
                ch=s[j];
                j--;
                while(i<j && s[j]==ch)
                    j--;

            }else 
                return j-i+1;
               
        }
cout<<i<<"    "<<j<<endl;
    if(i-j==0)
        return 1;
    else
        return 0;
    }