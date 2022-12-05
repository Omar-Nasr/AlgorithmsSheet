#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        getline(cin,s);
        vector<int> c(1000);
        int total = 0;
        for (int i = 1; i < s.length(); i+=3) {
                if(c[s[i]]<1)
                        c[s[i]]++;
        }
        for (int i = 0; i < c.size(); i++) {
                total+=c[i];
        }
        if(s=="{}")
                total=0;
        cout<<total<<endl;

}

