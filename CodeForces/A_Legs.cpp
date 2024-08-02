#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int cow = n/4;
    int hen = (n-(cow*4))/2;
    cout<<cow+hen<<"\n";
  }
}