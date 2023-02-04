#include <iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,n,m;
    cin>>n;

    for(i=0;i<n;i++){
             int x=0,y=0,co=0;
        cin>>m;
        string s;
        cin>>s;
        for(j=0;j<m;j++){
            if(s[j]=='U')
            {
         //       x=x;
                y++;
                if(x>=1&& y>=1 && x==y){
                    co++;
                }
            }
            else if(s[j]=='D')
                 {
           //     x=x;
                y--;
               // if(x==y){
               if(x>=1&& y>=1 && x==y){
                    co++;
                }
            }
            else if(s[j]=='R')
                 {
                x++;
             //   y=y;
               // if(x==y){
               if(x>=1&& y>=1 && x==y){
                    co++;

                }
            }
            else if(s[j]=='L')
                 {
                x--;
          //      y=y;
                //if(x==y){
                if(x>=1&& y>=1 && x==y){
                    co++;

                }
            }
        }
        if(co>0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    }

return 0;
}
