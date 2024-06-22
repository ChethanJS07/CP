#include<bits/stdc++.h>
using namespace std;
          
int flip(int a)
{
  if(a==1)
  {
    return 0;
  }
  else if(a==0)
  {
    return 1;
  }
}

int main()
{
  vector<int>v={0,1,1,1};
  int tot=0;
  for(int i=0;i<v.size()-2;i++)
  {
    if(v[i]==0)
    {
      v[i]=flip(v[i]);
      v[i+1]=flip(v[i+1]);
      v[i+2]=flip(v[i+2]);
      tot++;
    }
  }
  
  if(count(v.begin(),v.end(),0)==0)
  {
    cout<<tot<<endl;
  }
  else
  {
    cout<<-1<<endl;
  }
}