#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n,k;
        int c = 0;
        cin>>n>>k;
        for (int i = 0; i < n; i++) {
                int mask = 0;
                ll x;
                cin>>x;
                while(x!=0){
                        int y = x%10;
                        if(y<=k)
                                mask|=(1<<y);
                        x/=10;
                        

                }
                int res = (1<<(k+1)) -1;
                if(mask==res)
                        c++;
        }
        cout<<c<<endl;

}

