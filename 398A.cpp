#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
                cin>>nums[i];
        }
        int max = n;
        int min = n;
        priority_queue<int> remaining;
        for (int i = 0; i < n; i++) {
                if(nums[i]==max)
                {
                        cout<<max<<" ";
                        max--;
                        while(true){
                                if(remaining.size()==0)
                                        break;
                                if(remaining.top()!=max)
                                        break;
                                cout<<remaining.top()<<" ";
                                remaining.pop();
                                max--;
                        }

             
                       
                        cout<<endl;
                }
        else {
                        cout<<endl;
                        remaining.push(nums[i]);
                      
                }
        }



}

