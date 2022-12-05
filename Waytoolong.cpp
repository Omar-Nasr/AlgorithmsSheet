#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        for (int i = 0; i < n; i++) {
                string s;
                cin>>s;
                if(s.length()>10)
                {
                        string x = to_string(s.length()-2);
                        string y = string(1,s[0]);
                        string z = string(1,s[s.length()-1]);
                        s = y + x + z;

                }
                cout<<s<<endl;
        }

}

