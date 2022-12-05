#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n,k;
        cin>>n>>k;
        int total = 0;
        for (int i = 0; i < n; i++) {
                int x,y;
                cin>>x>>y;
                total += (y-x)+1;
        }
        if(total%k!=0)
        cout<<k-(total%k)<<endl;
else {
        cout<<0<<endl;
}

}

