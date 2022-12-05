#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        // X,Y
        // Z,W 
        // X+Z = C1 
        // X+Y = r1
        // X+W = d1
        // Y+Z = d2
        // Y+W = c2
        // Z+W = r2
        int c1,r1,d1,d2,c2,r2;
        cin>>r1>>r2;
        cin>>c1>>c2;
        cin>>d1>>d2;
        int flag = false;
        int x,y,z,w;
        int xf,yf,zf,wf;
        for (x = 1; x <10; x++) {
                for (y = 1; y < 10; y++) {
                        for (z = 1; z < 10; z++) {
                                for (w = 1; w < 10; w++) {
                                        if(x+z==c1 && x+y == r1 && x+w== d1 && y+z==d2 && y+w==c2 && z+w==r2 && x!=y && x!=z && x!=w && y!=z && y!=w && z!=w )
                                                {
                                                flag = true;
                                                xf = x;
                                                yf = y;
                                                zf = z;
                                                wf = w;
                                        }
                                        
                                }
                                
                        }
                        
                }
                
        }
        if(!flag)
                cout<<-1<<endl;
        else {
                cout<<xf<<" "<<yf<<endl;
                cout<<zf<<" "<<wf<<endl;
        }

}

