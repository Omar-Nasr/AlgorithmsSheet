#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        string x;
        cin>>x;
        n--;
        int g=1;
        while(n--){
                string y;
                cin>>y;
                if(x[1]==y[0])
                        g++;
                x=y;
                

                
                
        }
        cout<<g<<endl;

}

