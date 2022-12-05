#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        ll n,k,r,res;
        cin>>n>>k;
        if(n%2==0)
                r=n/2;
        else {
                r=n/2+1;
        }
        if(k<=r)
                res = 2*k-1;
        else {
                res = (k-r)*2;
        }
        cout<<res<<endl;

}
