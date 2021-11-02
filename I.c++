/?PREPARED BY HAIMAN
#include<bits/stdc++.h>
using namespace std;
int main()
{
char s[1000];
int l,first,last,flag=0;
cin>>s;
l=strlen(s);
first=0;
last=l-1;
while(first<last){
if(s[first]==s[last])
flag==0;
else
flag=1;
first++;
last--;
}
if(flag==0)
cout<<"YES";
else
cout<<"NO";
}
