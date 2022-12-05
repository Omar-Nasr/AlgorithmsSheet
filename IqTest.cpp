#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        char c;
        int x[4][4];
        int y[4][4];
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                        cin>>c;
                        if(c=='#')
                        {
                                x[i][j]=1;
                                y[i][j]=0;
                        }
                else {
                                x[i][j]=0;

                                y[i][j]=1;
                        }
                }
        }
        bool flag = false;
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        if(x[i][j]+x[i+1][j]+x[i][j+1]+x[i+1][j+1]>=3)
                        {
                                flag = true;
                                break;
                        }
                        if(y[i][j]+y[i+1][j]+y[i][j+1]+y[i+1][j+1]>=3)
                        {
                                flag = true;
                                break;
                        }

                }
                
        }
        cout<<(flag?"YES":"NO")<<endl;

}

