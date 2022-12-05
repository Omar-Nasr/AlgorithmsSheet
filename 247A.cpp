#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        vector<int> a(4);
        int total = 0;
        for (int i = 0; i < 4; i++) {
                cin>>a[i];
        }
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++) {
                int x = (int) s[i]-49;
                total+=a[x];
        }
        cout<<total<<endl;

}

