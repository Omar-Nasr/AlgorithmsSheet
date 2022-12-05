#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> minlist(n);
        vector<ll> maxlist(n);
        for (int i = 0; i < n; i++) {
                cin>>a[i];
        }
        maxlist[0] = a[n-1]-a[0];
        maxlist[n-1] = maxlist[0];
        minlist[n-1] = a[n-1]-a[n-2];
        minlist[0] = a[1]-a[0];
        for (int i = 1; i < n-1; i++) {
                minlist[i] = min(a[i]-a[i-1],a[i+1]-a[i]);
                maxlist[i] = max(a[n-1]-a[i],a[i]-a[0]);
        }
        for (int i = 0; i < n; i++) {
                cout<<minlist[i]<<" "<<maxlist[i]<<endl;
        }
        
        


}

