#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n,x;
        cin>>n;
        vector<int> b(n+1);
        for (int i = 0; i < n; i++) {
                cin>>x;
                b[x]=i+1;
                
                
        }
        for (int i = 1; i <= n; i++) {
                cout<<b[i]<<" ";
        }
        cout<<endl;

}

