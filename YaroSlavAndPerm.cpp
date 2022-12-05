#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        vector<int> a(1001);

        for (int i = 0; i < n; i++) {
                int x;
                cin>>x;
                a[x]++;

        }
        bool flag = true;
        for (int i = 0; i < 1001; i++) {
                if(a[i]> ceil(((double)n) /2))
                        flag = false;
        }
        cout<<(flag?"YES":"NO")<<endl;

}

