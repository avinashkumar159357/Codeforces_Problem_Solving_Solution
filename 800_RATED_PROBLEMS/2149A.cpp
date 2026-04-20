//Problem name:Be positive
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2149A
//Description:math(800)
//Last Changed:19-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,minus_Sign=0,no_of_operation=0; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]<0) minus_Sign++;
    } 
    
    for (int  i = 0; i <n; i++)
    {
        if (a[i]==-1){
            if(minus_Sign%2==1){
                a[i]+=2;
                no_of_operation+=2;
                minus_Sign--;
            }else continue;
        }else if(a[i]==0){
                a[i]++;
                no_of_operation++;
        }else continue;
        
    }
    cout<<no_of_operation<<"\n";   
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 