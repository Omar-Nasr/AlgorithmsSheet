#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        cin>>s;
        vector<int> a(27);
        int c=0;
        for (int i = 0; i < s.length(); i++) {
                if(!a[s[i]-96])
                {

                        c++;
                        a[s[i]-96]++;
                }
                
        }
        cout<<((c+1)%2?"CHAT WITH HER!":"IGNORE HIM!");
        cout<<endl;

}

