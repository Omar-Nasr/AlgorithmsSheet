#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
                cin>>a[i];
        }
        int c=0;
        int big = a[k-1];
        for (int i = 0; i < n; i++) {
                if(a[i]>0 && a[i]>=big)
                        c++;
                
        }
        cout<<c;

}

