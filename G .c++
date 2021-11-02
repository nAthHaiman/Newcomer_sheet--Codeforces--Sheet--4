/?PREPARED BY HAIMAN
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    gets(s);
    int i,a;
    a=strlen(s);
    for (int i=0;i<a;i++)
{
    int x=s[i];
    if(x>=97 && x<=122)
    {
      s[i]=s[i]-32;
        cout<<s[i];
    }
    if(x>=65 && x<=90)
    {
      s[i]=s[i]+32;
        cout<<s[i];
    }
    if(x==',')
        {
            cout<<" ";
    }
}
}
