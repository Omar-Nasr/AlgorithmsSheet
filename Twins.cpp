#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int sumarr(vector<int> a){
        int sum = 0;
        for (int i = 0; i < a.size(); i++) {
                sum+=a[i];
                
        }
        return sum;

}
int main(){
        int n;
        cin>>n;
        vector<int> coins(n);
        for (int i = 0; i < n; i++) {
                cin>>coins[i];
        }
        sort(coins.begin(),coins.end());
        int total = coins.back();
        int no = 1;
        coins.pop_back();
        while(true){
                if(coins.size()==0)
                        break;
                if(total>sumarr(coins))
                        break;
                total+=coins.back();
                coins.pop_back();
                no++;

        }
        cout<<no<<endl;
        

}

