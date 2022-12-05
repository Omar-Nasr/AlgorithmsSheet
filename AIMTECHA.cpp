#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        ll n,b,d;
        cin>>n>>b>>d;
        ll total = 0;
        ll count = 0;
        for (int i = 0; i < n; i++) {
                ll x;
                cin>>x;
                if (x<=b) {
                        total+=x;
                }
                if (total>d) {
                        total = 0;
                        count++;
                }
        }
        cout<<count;

}

