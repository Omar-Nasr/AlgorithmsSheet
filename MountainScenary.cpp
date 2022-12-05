#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n,k;
        cin>>n>>k;
        int x = 2*n+1;
        vector<int> y(x);
        for (int i = 0; i < x; i++) {
                cin>>y[i];
        }
        for (int i = 0; i < x; i++) {
                
                if(i%2!=0){
                        if(k==0)
                                continue;
                        if(y[i-1]<y[i]-1 && y[i+1]<y[i]-1)
                        {
                                k--;
                                y[i]--;
                        }
                        


                }
        }
               for (int i = 0; i < x; i++) {
                cout<<y[i]<<" ";
        }
        cout<<endl;

}

