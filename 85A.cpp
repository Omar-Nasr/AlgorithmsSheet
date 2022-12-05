#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        string x;
        cin>>x;

        cin>>s;
        for (int i = 0; i < s.length(); i++) {
                s[i] = tolower(s[i]);
                x[i] = tolower(x[i]);
                
        }
        if(x>s)
        {
                cout<<1<<endl;
                return 0;}

        if(s>x)
        {
                cout<<-1<<endl;
                return 0;}

        if(s==x)
        {
                cout<<0<<endl;
                return 0;}
}

