#include <iostream>
#include <regex>
using namespace std;

class Solution 
{
  public:
    string getNum(string str,int &i)
    {
      string temp="";
      while(str[i]!='/' and i<str.size())
      {
        if(str[i]==',')
        {
          i+=2;
          return temp;
        }
        else
        {
          temp+=str[i];
          i++;
        }
      }
      i++;
      return temp;
    }
  
    string compareFrac(string str) 
    {
      int i=0;
      string a=getNum(str,i);
      string b=getNum(str,i);
      string c=getNum(str,i);
      string d=getNum(str,i);
      
      float a1=stof(a);
      float b1=stof(b);
      float c1=stof(c);
      float d1=stof(d);
      float ans1=a1/b1;
      float ans2=c1/d1;
      if(ans1>ans2)
      {
        return a+"/"+b;
      }
      else if(ans2>ans1)
      {
        return c+"/"+d;
      }
      return "equal";
    }
};

int main() 
{
  Solution ob;
  int t;
  cin >> t;
  cin.ignore();
  for (int i = 0; i < t; i++) 
  {
    string str;
    getline(cin, str);
    cout << ob.compareFrac(str) << endl;
  }
  return 0;
}