/?PREPARED BY HAIMAN
#include<bits/stdc++.h>
using namespace std;
     
        
        int main()
        {
              #ifndef ONLINE_JUDGE
              freopen("input.txt","r",stdin);
              freopen("output.txt","w",stdout);
              #endif

            string s;
            cin >> s;
            int i, n, a[5] = {0};
          
            n = s.size();
            
           
            for(i=0; i<n; i++)
            {
                s[i] = tolower(s[i]);
                if(s[i]=='e')
                    a[0]++;
                else if(s[i]=='g')
                    a[1]++;
                else if(s[i]=='y')
                    a[2]++;
                else if(s[i]=='p')
                    a[3]++;
                else if(s[i]=='t')
                    a[4]++;
            }   

            int min = a[0];
            for(int i = 0; i < 5; i++ ){
                if(a[i] < min ) min = a[i];
            }         
            
            cout << min << endl;
            return 0;
        }
