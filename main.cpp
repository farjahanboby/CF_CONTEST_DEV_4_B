#include <iostream>

using namespace std;

int main()
{
    int n,i,l;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>l;
        for(i=0;i<l;i++){
            cin>>s;
                for(i=1;i<s.length();i++){
                if(s[i]>s[i+1]){
                       cout<<i<<endl;
                }

            }

        }
    }
    return 0;
}
