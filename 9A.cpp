#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
unsigned int gcd(unsigned int u, unsigned int v) {
  int shift;
  if (u == 0)
    return v;
  if (v == 0)
    return u;
  shift = __builtin_ctz(u | v);
  u >>= __builtin_ctz(u);
  do {
    unsigned m;
    v >>= __builtin_ctz(v);
    v -= u;
    m = (int)v >> 31;
    u += v & m;
    v = (v + m) ^ m;
  } while (v != 0);
  return u << shift;
}
int main(){
        unsigned int x,y;
        cin>>x>>y;
        x = 6 - max(x,y) + 1;
        y = 6;
        while(gcd(x,y)!=1)
        {
                unsigned int v = gcd(x,y);
                y/=v;
                x/=v;
        }
        cout<<x<<"/"<<y<<endl;

}

