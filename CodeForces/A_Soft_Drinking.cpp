#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int toast = min((k*l)/nl,min((c*d)/1,p/np));
  cout<<toast/n<<endl;
}