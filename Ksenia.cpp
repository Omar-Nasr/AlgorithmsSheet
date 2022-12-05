#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        cin>>s;
        string leftstring = "";
        string rightstring = "";
        bool flag = true;
        string w;
        cin>>w;
        for (int i = 0; i < s.length(); i++) {
                if(s[i] == '|')
                {
                        flag = false;
                        continue;
                }
                if(flag)
                {
                        leftstring+=s[i];
                }
        else {
                        rightstring+=s[i];
                }

        }

        s = "";
        int rightlength = rightstring.length();
        int leftlength = leftstring.length();
        int weights = w.length();
        int diff = abs(rightlength-leftlength);
        if(diff>weights || (weights-diff)%2!=0){
                cout<<"Impossible"<<endl;
                return 0;
        }
        int p=0;
        if(rightlength<leftlength){
                for ( p = 0; p < diff; p++) {
                        rightstring+=w[p];
                }



        }
        if(leftlength<rightlength){
                for ( p = 0; p < diff; p++) {
                        leftstring+=w[p];
                }



        }
        while(p<w.length()){
                if(p%2==0)
                        leftstring+=w[p];
                else {
                        rightstring+=w[p];
                }
                p++;
        }
        cout<<leftstring<<"|"<<rightstring<<endl;

}

