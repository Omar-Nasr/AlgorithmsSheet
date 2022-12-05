#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int countchars(string x,char c){
        int count = 0;
        for(char z : x)
        {
                if(z==c)
                        count++;
        }
        return count;
       
        

}
int main(){
        string x;
        string y;
        cin>>x;
        cin>>y;
        int total1=0;
        int total2=0;

        vector<int> countx(200);
        vector<int> county(200);
        for (int i = 0; i < x.length(); i++) {
                countx[(int)x[i]]++;
        }
        for (int i = 0; i < y.length(); i++) {
                county[(int)y[i]]++;
        }
        for(char c : x)
        {
                if(countx[(int)c]>county[(int)c]){
                  total1+=countx[(int)c];

                }
                
        }
         for(char c : y)
        {
                if(countx[(int)c]<county[(int)c]){
                        total2+=county[(int)c];
                }
                
        }
         if(total1>total2)
                 cout<<x.length();
         else if(total2>total1){
                 cout<<y.length();
                 

         }
         else{
                 if(y==x)
                         cout<<-1;
                 else
                         cout<<x.length();
         }

}

