#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
       vector<int> right_indexes;
        int res = -1;
        vector<int> points(n);
        for (int i = 0; i < n; i++) {
                cin>>points[i];
        }
        for (int i = 0; i < n-1; i++) {
                if(s[i]=='R' && s[i+1]=='L')
                        right_indexes.push_back(i);
        }
        for (int i = 0; i < right_indexes.size(); i++) {
                int curr = right_indexes[i];
                        int y = (points[curr+1]-points[curr])/2;
                if(res==-1)
                        res = y;
                else{
                                if(y<res)
                                        res = y;
                        }
                        }
        cout<<res<<endl;
        


}

