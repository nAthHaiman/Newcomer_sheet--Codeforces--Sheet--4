#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
sort(s.begin(),s.end());
int l=s.size();
char x=s[0];
int flag=1;
for(int i=1;i<=l;i++)
{
    if(s[i]==x)
        flag++;
        //a jkhn ar pabe na sheta if er noddhe tokhn sheta else e eshe print hbe
        else{ 
        cout<<x<<" : "<<flag<<endl;
        x=s[i];
        flag=1;
    }
}

}
