#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;//test case number

for(int j=0;j<n;j++)
{
    char s1[1000],s2[1000];
    cin>>s1>>s2;
    int l1,l2,x,y;
    l1=strlen(s1);
    l2=strlen(s2);

    //find match that string is both r equal and put the short string length in x and long string length in y
    if(l1<l2){
        x=l1;
        y=l2;
    }
    else{
        x=l2;
        y=l1;
    }
    if(l1==l2)
        x=l1;
    //printing the output
    //here the limit is from 0 to x here l1=l2 so the x is same
    for(int i=0;i<x;i++){
        cout<<s1[i]<<s2[i]; //if the length is same
}
if(l1!=l2){
    if(l2<l1){
    for(int i=x;i<y;i++){
        cout<<s1[i];//here is l1 is greater so print s1's rest letter
    }
}
else{
    for(int i=x;i<y;i++){
        cout<<s2[i];//here is l1 is greater so print s1's rest letter
}
}

}
cout<<endl;
}
}
