#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int y = 0;
        int a,b;
        cin>>a>>b;
        while(b>=a)
        {
                a*=3;
                b*=2;
                y++;
        }
        cout<<y<<endl;

}

