#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        vector<int> a(1000);
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(char c : s)
        {
                char x = tolower(c);
                if(a[(int) x]==0)
                        a[(int) x]++;
        }
        int c =0;
        for (int i = 0; i < 1000; i++) {
                c+=a[i];
        }
        if(c==26)
                cout<<"YES";
else {
        cout<<"NO";
}

}


