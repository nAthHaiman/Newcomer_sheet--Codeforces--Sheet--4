/?PREPARED BY HAIMAN
#include<bits/stdc++.h>
using namespace std;
int main()
{

  string x,y;
  cin>>x>>y;
  int a=max(x.size(),y.size());
 for(int i=0;i<a;i++)
 {
     if(x[i]>y[i])
     {
         cout<<y;
         break;
     }
     else if(x[i]<y[i])
     {
         cout<<x;
         break;
     }
 }
 if(x==y)
 cout<<x;

}
