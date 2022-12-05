#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        vector<int> a {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string s;
        cin>>s;
        int initiallocation = 0;
        int totalmoves = 0;
        char prev_index = 'a';
        for (int i = 0; i < s.length(); i++) {
                int target_index = *lower_bound(a.begin(),a.end(),s[i]);
                int current_index = *lower_bound(a.begin(),a.end(),prev_index);
                int clockwisemoves = max(target_index,current_index)-min(target_index,current_index);
                int anticlockwisemoves = 26-clockwisemoves;
                totalmoves+=min(clockwisemoves,anticlockwisemoves);
                prev_index = s[i];


        }
        cout<<totalmoves<<endl;

}

