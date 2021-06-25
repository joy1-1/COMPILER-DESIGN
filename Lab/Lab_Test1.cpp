#include<iostream>
#define nl '\n'
using namespace std;

void validIdentifier()
{
    string s,new_str;
    cout<<"Enter String: ";
        cin>>s;
    for(int i=0; i<s.size(); i++){
        if( (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
            cout<<s[i];
            continue;
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='=')
                cout<<"\nlt is a operator: "<<s[i]<<nl;
        else{
            if(s[i]>='0'&&s[i]<='9')
                cout<<nl<<s[i]<<" is not identifier."<<nl;
            else
                continue;
        }
    }
}

void vowelcheck()
{
    char ch;

    cout<<"Enter Alphabet: ";
        cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<"\n lt is a Vowel:";
    else if(ch=='A' || ch=='e' || ch=='I' || ch=='O' || ch=='U')
        cout<<"\n lt is a Vowel:";
    else
        cout<<"\n lt is a Consonant:";
}

void Keyword()
{
    string key;
        cin>>key;

    char keyword[40][15]
    {
        "int","char","if","else","double","float","break","switch","case","char","return",
    } ;

    bool check=false;
    for(int i=0; i<40; i++)
    {
      if(key==keyword[i])
      {
         check=true;
      }
    }

}

int main(void)
{
   int n,cnt,sum=0,mx=0,mi=INT_MAX;
    validIdentifier();
    vowelcheck();
    Keyword();
}
