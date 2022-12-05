#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int asciia = 97;
        int n,k;
        cin>>n>>k;
        int y = 0;
        string passwd = "";
        for (int i = 0; i < n; i++) {
                y = i%k;
                char z = (char) (asciia+y);
                passwd+=z;

                
                
        }
        cout<<passwd;

}

