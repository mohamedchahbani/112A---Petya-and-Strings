#include<bits/stdc++.h>
using namespace std;


int main(){
    string  ch,ch1;
    cin>>ch>>ch1;
    bool ok=true;
    int i=0;
    while((ch[i])&&(ch1[i])&&(ok)){
        ok=(toupper(ch[i])==toupper(ch1[i]));
        i++;
    }
    if (ok)
    {
        cout<<0;
    }else{
        i--;

        if(toupper(ch[i])>toupper(ch1[i])){
            cout<<1;
        }else{
            cout<<-1;
        }
    }


    return 0;
}
