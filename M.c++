/?PREPARED BY HAIMAN
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    // c er value h nilam hello r h
    char c='h';
    int l= s.size(),flag = 0;
    for(int i=0; i<l; i++)
    {
        if(s[i]==c)
            // h pele erpor loop e dhukbe ,,ekhane c==h 
        {
            flag++;
            if(flag == 1)
                c = 'e';
        //ebar e khujbe
            else if(flag == 2)
                c = 'l';
                //ebar l khujbe
            else if(flag==3)
                c= 'l';
                 //ebar l khujbe
            else if(flag== 4)
                c = 'o';
                 //ebar o khujbe
            else if(flag == 5)
                //peye gele 5 hoye break
                break;
        }
    }
    if(flag == 5)
        cout<<"YES";
    else
        cout<<"NO";
}
