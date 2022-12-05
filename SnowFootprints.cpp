#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        bool foundRight = false;
        bool foundLeft = false;
        int rightindex;
        int leftindex;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++) {
                if(s[i]=='R')
                {
                        foundRight = true;
                        rightindex = i;
                        break;
                }
                if(s[i] == 'L')
                {
                        foundLeft = true;
                        leftindex = i;
                }

        }
        if(foundRight)
        {
                int rightfinal = rightindex;
                while(s[rightfinal]=='R')
                        {
                                rightfinal++;
                        }
                cout<<rightindex+1<<" "<<rightfinal+1<<endl;
                return 0;
        }
        int leftfinal = leftindex;
        while(s[leftfinal] == 'L')
                leftfinal--;
        cout<<leftindex+1<<" "<<leftfinal+1<<endl;

}

