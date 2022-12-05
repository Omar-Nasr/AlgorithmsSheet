#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        int count = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
                cin>>a[i];
                
        }
        sort(a.begin(),a.end());
        for (int i = 1; i < n-1; i++) {
                if(a[i]!=a[0] && a[i]!=a[n-1])
                        count++;
        }
        cout<<count<<endl;

}

