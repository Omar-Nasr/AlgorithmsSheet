#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        int s=0;
        int d=0; 
        bool flag = 0;
        deque<int> a(n);
        for (int i = 0; i < n; i++) {
                cin>>a[i];
        }
        while(a.size()>0)
        {
                if(a.back()>a[0])
                {
                        if(!flag)
                                s+=a.back();

                        else{
                                d+=a.back();
                        }


                        a.pop_back();
                        
                       
                }
                else{
                        if(!flag)
                                s+=a[0];
                        else{
                                d+=a[0];
                        }

                        a.pop_front();




                }
                flag = flag^1;

        }
        cout<<s<<" "<<d<<endl;
        
}

