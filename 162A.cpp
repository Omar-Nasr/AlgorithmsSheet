#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        cin>>s;
        string t;
        cin>>t;
        int j = 1;
        for (int i = 0; i < t.length(); i++) {
                if(s[j-1]==t[i])
                        j++;
                
        }
        cout<<j<<endl;

}

