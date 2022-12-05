#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
                cin>>a[i];
                
        }
        int m;
        cin>>m;
        for (int i = 0; i < m; i++) {
                int x,y;
                cin>>x>>y;
                int leftbirds = y-1;
                int rightbirds = a[x-1]-1-leftbirds;
                if(x-1<n-1)
                        a[x]+=rightbirds;
                if(x-1>0)
                        a[x-2]+=leftbirds;
                
                a[x-1]=0;
                


                
        }
        for (int i = 0; i < n; i++) {
                cout<<a[i]<<endl;
        }

}

