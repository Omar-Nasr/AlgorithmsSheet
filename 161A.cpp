#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int i,j,x;
        for ( i = 1; i <= 5; i++) {
                for ( j = 1; j <=5; j++) {
                        cin>>x;
                        if(x==1)
                                break;
                }
                if(x==1)
                        break;
        }
        int res = abs(3-j)+abs(3-i);
        cout<<res<<endl;

}

