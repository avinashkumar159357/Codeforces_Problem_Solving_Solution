    #include<bits/stdc++.h>
    using namespace std;

    void solve(){   
        int n;
        long long c,k,b,u;
        
        cin>>n>>c>>k;

        vector<long long> a(n);
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i <n; i++)
        {
            if (c<a[i])
                break;
            
            b=c-a[i];
            
            u=min(b,k);
            a[i]+=u;
            k-=u;
            c=c+a[i];
        }
        cout<<c<<"\n";    
     }
        
       

    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin>>t;
        while(t--) {
            solve();
        }

    }    

