#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        /* 1 : (4,9) */
        /* 2 : (3,8) */
        /* 3 : (2,7) */
        /* 4 : (1,6) */
        /* 5 : (0,5) */
        /* 6 : (4,9) */
        /* 7 : (3,8) */
        /* 8 : (2,7) */
        /* 9 : (1,6) */
        /* 0 : (0,5) */
        ll n,m;
        cin>>n>>m;
        vector<int> count(10);
        for (int i = 1; i <= m; i++) {
                count[i%10]++;
                
        }
        ll total=0;
        for (int i = 1; i <= n; i++) {
                int modular = i%10;
                if(modular==0)
                        total+=count[5]+count[0];

                else if(modular<=5)
                                total+=count[5-modular]+count[10-modular];
                        else {
                                        total+=count[10-modular]+count[15-modular];
                                }
                
        }

        cout<<total<<endl;


}

