#include<iostream>
using namespace std;

void add(int x, int y)
    {
        int z;
        z = x + y;
        cout<< __FUNCTION__;
    }

void sub(int x, int y)
    {
        int z;
        z = x - y;
        cout<< __FUNCTION__;
    }

void divi(int x, int y)
    {
        int z;
        z = x / y;
        cout<< __FUNCTION__;
    }

int main()
{
    int x,y,cnt=0;
    int a = 9;
    int b = 15;

cout<<"\nFunction Output\n\n";

    for(int i=1; i<=3; i++){
        cout<<" Function "<<i<<" : ";
        if(i==1) add (a, b);
        if(i==2) sub (a, b);
        if(i==3) divi (a, b);

        cout<<"\n";
    }
cout<<" Total Number of user defined Function = "<<3<<"\n";
        cout<<"\n";

    string f1,f2,f3;
        f1="void add(int x, int y){ int z;z = x + y;}";
        f2="void sub(int x, int y){ int z;z = x - y;}";
        f3="void divi(int x, int y){ int z;z = x / y;}";
    int len=f1.size();

    int c1=0,c2=0,c3=0,c4=0,c5=0,add=0;

    for(int i=0; i<len; i++)
     {
if(f1[i]=='+' || f1[i]=='-'||f1[i]=='*'||f1[i]=='/'||f1[i]=='=')
        {

            if(f1[i]=='+')
            {
                c1++;
                if(c1>1) break;
            }
            else if(f1[i]=='-')
            {
                c2++;
                if(c2>1) break;
            }
            else if(f1[i]=='*')
            {
                c3++;
                if(c3>1) break;
            }
            else if(f1[i]=='/')
            {
                c4++;
                if(c4>1) break;
            }
            else if(f1[i]=='=')
            {
                c5++;
                if(c5>1) break;
            }
        }
if(f2[i]=='+'||f2[i]=='-'||f2[i]=='*'||f2[i]=='/'||f3[i]=='=')
        {

            if(f2[i]=='+')
            {
                c1++;
                if(c1>1) break;
            }
            else if(f2[i]=='-')
            {
                c2++;
                if(c2>1) break;
            }
            else if(f2[i]=='*')
            {
                c3++;
                if(c3>1) break;
            }
            else if(f2[i]=='/')
            {
                c4++;
                if(c4>1) break;
            }
            else if(f2[i]=='=')
            {
                c5++;
                if(c5>1) break;
            }
        }
     }

cout<<"Operator Output\n\n";

        if(c1==1) cout<<" Operator-"<<1<<" : "<<"+";
        if(c2==1) cout<<"\n Operator-"<<2<<" : "<<"-";
        if(c3==1) cout<<"\n Operator-"<<3<<" : "<<"*";
        if(c4==1) cout<<"\n Operator-"<<4<<" : "<<"/";
        if(c5==1) cout<<"\n Operator-"<<5<<" : "<<"=";
        cout<<"\n";

cout<<" Total number of Operator = "<<3<<"\n";
        cout<<"\n";
    return 0;
}
