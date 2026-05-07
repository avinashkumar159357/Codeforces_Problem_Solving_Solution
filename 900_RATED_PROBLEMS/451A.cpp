//Problem name:Game With Sticks
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:451A
//Description:implementation(*900)
//Last Changed:6-05-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);


void solve() {
    int n,m; cin>>n>>m;
    int total_points=n*m;
    int count=0,point_remove=0;
    while (total_points!=0)
    {
        count++;
        point_remove=n+m-1;
        total_points-=point_remove;
        n--;
        m--;
    }
    if(count%2==0) cout<<"Malvika";
    else cout<<"Akshat";
    
}

int main() {
    fastio;
    int TC=1; // cin>>TC;
    while(TC--) {
        solve();
    }

}    

