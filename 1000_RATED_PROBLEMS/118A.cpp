//Problem name:String Task
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:118A
//Description:implementation,string(*800)
//Last Changed:4-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s,s1,s2; cin>>s;
    set<char>st={'a','e','i','o','u','y'};
    //converting all the character to lowercase
    for(char &c: s) c=tolower(c);
    //concatenating all the consonants into s1
    for (int i = 0; i < s.size(); i++)
    {
        if(st.find(s[i])!=st.end()) continue;
        else s1+=s[i];
    }
    //adding '.' in front of each consonant
    for (int i = 0; i < s1.size(); i++)
    {
        s2+='.';
        s2+=s1[i];
    }
    
    cout<<s2;
}

        
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}    
