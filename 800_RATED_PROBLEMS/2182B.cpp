//File name:New Year Cake
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 2182B
//Description:brute force(*800)
//Last Changed:26-4-2026

#include<bits/stdc++.h>
using namespace std;

int NYC(long long a, long long b){
    int i=0,c=0;
    while (i<62)
    {
        long long layers=1LL << i;
        if(layers<=a){
            a-=layers;
            c++;
        }else break;
        i++;
        layers=1LL << i;
        if(layers<=b){
            b-=layers;
            c++;
        }else break;
        i++;
    }
    return c;
}
void solve() {
    long long a,b; cin>>a>>b;
    int no_of_layer=max(NYC(a,b),NYC(b,a));
    cout<<no_of_layer<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
