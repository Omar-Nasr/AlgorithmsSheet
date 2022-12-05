#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
        string s;
        cin>>s;
        vector<int> numbers;
        for (int i = 0; i < s.length(); i++) {
                if(s[i]=='+')
                        continue;
                numbers.push_back((int)s[i]-48);
        }
        sort(numbers.begin(),numbers.end());
        string output = "";
        for (int i = 0; i < numbers.size()-1; i++) {
                string num = to_string(numbers[i]);
                output+=num;
                output+="+";
        }
        string finalnum = to_string(numbers[numbers.size()-1]);
        output+=finalnum;
        cout<<output<<endl;

}

