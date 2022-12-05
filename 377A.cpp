#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int x,y;
        cin>>x>>y;
        int initx=x;
        int c = 1;
        while (x%10!=0 && x%10!=y)
        {
                c++;
                x+=initx;
                
        }
        cout<<c<<endl;

}

