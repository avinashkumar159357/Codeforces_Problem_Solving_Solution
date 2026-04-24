//File name:Maximum_multiple sum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1985B
//Description:brute force , greedy, math(*800)
//Last Changed:24-4-2026

#include<bits/stdc++.h>
using namespace std;
int sum_of_multiples(int i,int n){
    int multiples=i,sum=0,j=2;
    while (multiples<=n)
    {
        sum+=multiples;
        multiples=i*j;
        j++;
    }
    return sum;
}
void solve() {
    int n; cin>>n;
    int ans=0,k=0;
    for (int i = 2; i <=n; i++)
    {
        int max_sum=sum_of_multiples(i,n);
        if(max_sum>ans){
            ans=max_sum;
            k=i;
        }
    }
    cout<<k<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
