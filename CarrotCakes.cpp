#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        float n,t,k,d;
        cin>>n>>t>>k>>d;
        int time1 = ceil(n/k)*t;
        int time2 = 0;
        int baked = 0;
        while (baked<n)
        {
                time2++;
                if(time2 % (int)(d+t)==0)
                        baked+=k;
                if(time2 % (int)t == 0)
                        baked+=k;


                
        }
        if(time2<time1)
                cout<<"YES"<<endl;
        else {
                cout<<"NO"<<endl;
        }
    

}

