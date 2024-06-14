#include<bits/stdc++.h>
using namespace std;

string intToBin(const string &a, const string &b) {
    string result = "";
    int length = a.length();
    for (int i = 0; i < length; ++i) 
    {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    
    return result;
}

int main() 
{
    string binary1, binary2;
    cin >> binary1;
    cin >> binary2;
    if (binary1.length() != binary2.length()) 
    {
        return 1;
    }
    string result = intToBin(binary1, binary2);
    cout << result << endl;
    return 0;
}
