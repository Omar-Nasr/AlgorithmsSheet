#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        cin>>s;
        int countup=0,countlow=0;
        for (int i = 0; i < s.length(); i++) {
                int x = s[i]; 
                if(x>90)
                        countlow++;
                else {
                        countup++;
                }
        }
        if(countup>countlow){
                for (int i = 0; i < s.length(); i++) {
                        s[i]=toupper(s[i]);

                }
        }
        else{
                for (int i = 0; i < s.length(); i++) {
                        s[i]=tolower(s[i]);
                }
        }
        cout<<s<<endl;

}

