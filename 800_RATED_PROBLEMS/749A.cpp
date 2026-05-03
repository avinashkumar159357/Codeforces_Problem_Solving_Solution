//File name:Bachgold Problem
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 749A
//Description:greedy math
//Last Changed:3-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ; cin>>n;
    int total_Prime=0;
    //edge case if n==2 or 3
    if(n==2 ||n==3){
        cout<<"1\n";
        cout<<n;
        return;
    }

    //if n is an even number
    if(n%2==0){
        int no_of_twos=n/2;
        cout<<no_of_twos<<"\n";
        while (no_of_twos--)
        {
            cout<<"2"<<" ";
        }
        return;
    }
    //if n is a odd number
    for (int i = 1; i < n; i++)
    {
        int exp=2*i+3;
        if(exp==n){
            total_Prime=i+1;
        }
    }
    cout<<total_Prime<<"\n";
    for (int i = 0; i < total_Prime-1; i++)
    {
        cout<<"2"<<" ";
    }
    cout<<"3";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}