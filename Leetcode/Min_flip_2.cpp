#include <bits/stdc++.h>
using namespace std;

int flip(int a) 
{
  return a == 1 ? 0 : 1;
}

int main() 
{
    vector<int> v = {1, 0, 0, 0};
    int tot = 0;
    bool flipped = false;

    for (int i = 0; i < v.size(); ++i) 
    {
      int current = v[i];
      if (flipped) 
      {
        current = flip(current);
      }
      if (current == 0) 
      {
        flipped = !flipped;
        tot++;
      }
    }
    cout << tot << endl;
}
