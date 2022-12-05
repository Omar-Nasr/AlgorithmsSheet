#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        int a=0,b=0;
        for (int i = 0; i < n; i++) {
                char x;
                cin>>x;
                if (x=='A') {
                        a++;
                        
                }
                else {
                        b++;
                }
                
        }
        if (a==b) {
                cout<<"Friendship"<<endl;
                return 0;
        }
        if(a>b)
                cout<<"Anton";
        if(b>a)
                cout<<"Danik";

}

