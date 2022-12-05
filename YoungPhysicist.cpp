#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        int x=0,y=0,z=0;
        for (int i = 0; i < n; i++) {
                int a,b,c;
                cin>>a>>b>>c;
                x+=a;
                y+=b;
                z+=c;
                
        }
        if(!x && !y && !z)
                cout<<"YES"<<endl;
else {
        cout<<"NO"<<endl;
}

}

