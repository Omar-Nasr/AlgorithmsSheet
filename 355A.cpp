#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n,h;
        cin>>n>>h;
        int c=0;
        for (int i = 0; i < n; i++) {
                int x;
                cin>>x;
                c++;
                if (x>h) {
                        c++;
                        
                }
        }
        cout<<c;

}

