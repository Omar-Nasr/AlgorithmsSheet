#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        int crimes = 0;
        int officers = 0;
        for (int i = 0; i < n; i++) {
                int x;
                cin>>x;
                if(x>0)
                        officers+=x;
                else {
                        if(officers>0)
                                officers+=x;
                        else {
                                crimes++;
                        }
                }
                
        }
        cout<<crimes<<endl;

}

