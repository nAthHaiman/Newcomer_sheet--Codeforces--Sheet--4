#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    char s[100000],x[4],c1[4]="010",c2[4]="101";
    int flag=0;
    cin>>s;
    int l=strlen(s);
    for(int j=0;j<l;j++){
        x[0]=s[j];
        x[1]=s[j+1];
        x[2]=s[j+2];
        x[3]='\0';
        int d1=strcmp(x,c1);
        int d2=strcmp(x,c2);

        if(d1==0 || d2==0){
            flag++;
            cout<<"Good"<<endl;
            break;
        }
    }
        if(flag==0)
            cout<<"Bad"<<endl;
}
}
