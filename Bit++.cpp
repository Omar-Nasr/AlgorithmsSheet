#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int x = 0;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++) {
                string s;
                cin>>s;

                int plus = 0;
                int minus = 0;
                for(char c : s)
                {
                        if(c=='+')
                        {
                                x++;
                                break;
                        }
                        if(c=='-')
                        {
                                x--;
                                break;
                        }
                }
        }
        cout<<x;

}

