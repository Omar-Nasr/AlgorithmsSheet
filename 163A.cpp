#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        char prevchar = s[0];
        for (int i = 1; i < n; i++) {
                if(s[i]==prevchar)
                        c++;
                prevchar = s[i];
        }
        cout<<c<<endl;

}

