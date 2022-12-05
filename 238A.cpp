#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        vi rows(100);
        int x;
        for (int i = 0; i < n; i++) {
                cin>>x;
                for (int j = 0; j < x; j++) {
                        rows[j]++;
                        
                }

        }
        vi column(n);
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < 100; j++) {
                        if(rows[j])
                        {
                        rows[j]--;
                        column[i]++;
                        }
                }
        }
        for (int i = n - 1; i >= 0; i--) {
                cout<<column[i]<<" ";
        }
        cout<<endl;
    
}

