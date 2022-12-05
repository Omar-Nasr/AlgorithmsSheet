#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        ll n,x;
        int d = 0;
        cin>>n>>x;
        for (int i = 0; i < n; i++) {
                ll input;
                char sign;
                cin>>sign>>input;
                if(sign=='+')
                        x+=input;
                else {
                        if(x>=input)
                                x-=input;
                        else {
                                d++;
                        }
                }
        }
        cout<<x<<" "<<d<<endl;

}

