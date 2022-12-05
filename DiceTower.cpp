#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        int x;
        cin>>x;
        bool flag = true;
        for (int i = 0; i < n; i++) {
                int y,z;
                cin>>y>>z;
                if(y==x || y==7-x || z==x || z==7-x)
                {
                        flag = false;
                        break;
                }
                
        }
        if(!flag)
                cout<<"NO"<<endl;
else {
        cout<<"YES"<<endl;
}

}

