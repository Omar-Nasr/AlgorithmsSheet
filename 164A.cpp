#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        vector<int> home(n);
        vector<int> away(n);
        vector<int> hfreq(102);
        
        for (int i = 0; i < n; i++) {
                cin>>home[i]>>away[i];
                hfreq[home[i]]++;
        }
        int total = 0;
        for (int i = 0; i < n; i++) {
                if(hfreq[away[i]]>0)
                {
                        total+=hfreq[away[i]];
                }

                
                
        }
        cout<<total<<endl;

}

