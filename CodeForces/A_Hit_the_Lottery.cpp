#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  long long n;
  cin>>n;
  long long a=n/100;
  long long b=(n%100)/20;
  long long c=((n%100)%20)/10;
  long long d=(((n%100)%20)%10)/5;
  long long e=((((n%100)%20)%10)%5)/1;
  cout<<a+b+c+d+e<<endl;
}