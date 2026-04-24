//File name:Desorting
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1853A
//Description:brute force , greedy, math(*800)
//Last Changed:24-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<long long>a(n);
    for (int  i = 0; i < n; i++) cin>>a[i];
    
    //check if the array is  already unsorted
    for (int i = 0; i <n-1 ; i++)
    {
        if (a[i]>a[i+1])
        {
             cout<<"0\n";
             return;   
        }
    }

    //handling a very important edge case(if all the elements of the array are equal)
    for (int  i = 0; i < n-1; i++)
    {
        if (a[i]==a[i+1])
        {
             cout<<"1\n";
             return;   
        }
    }
    
    //checking for the minimum distance between two elements
    long long min_Length=abs(a[1]-a[0]);
    int j=0,k=1;
    for (int i = 1; i < n-1; i++)
    {
        long long length=abs(a[i]-a[i+1]);
        if(length<min_Length) {
            min_Length=length;
            j=i;
            k=i+1;
        }
    }

    //calculating the minimum no of operation to make the array unsorted
    long long count_of_operation=0;
    long long diff= a[k]-a[j];
    count_of_operation=(diff/2)+1;
    
    cout<<count_of_operation<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
