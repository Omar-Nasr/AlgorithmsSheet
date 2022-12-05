#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int unique_count(vector<pair<int,int>> x){
        vector<int> count(4);
        int res = 0;
        for (int i = 0; i < x.size(); i++) {
                int y = x[i].first;
                if(count[y]<1)
                        count[y]++;
                
        }
        for (int i = 0; i < 4; i++) {
                if(count[i]>0)
                        res++;
        }
        return res;


}
int main(){
        int n;
        cin>>n;
        vector<pair<int,int>> input;
        for (int i = 0; i < n; i++) {
                int val;
                cin>>val;
                pair<int,int> x = make_pair(val,i+1);
                input.push_back(x);
        }
        int w = 0;
        sort(input.begin(),input.end());
        vector<string> result;
        while (unique_count(input)>=3)
        {
                string r = "";
                int x = 1;
                auto it = input.begin();
                while(it!=input.end()){
                        if((*it).first==x){
                                if(r=="")
                                        r+=to_string((*it).second);
                                else {
                                        r+=" ";
                                        r+=to_string((*it).second);
                                }
                                input.erase(it);

                                x++;

                        }
                        else{
                                it++;
                        }

                        
                }
             


                result.push_back(r);
                w++;
                
        }
        cout<<w<<endl;
        for (int i = 0; i < w; i++) {
                cout<<result[i]<<endl;
                
        }

        

}

