/?PREPARED BY HAIMAN
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int n;
cin>>n;
for (int i=0;i<n;i++)
{
    cin>>s;
    if(s.length()>10)
    {
         cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;  //ekhane s.length-1 holo last digit mane suppose 11 index ekhn s[s.length()-1] erkm dewai last index er value ta print hbe
    }
    else
        {
            cout<<s<<endl;
    }
}
}
