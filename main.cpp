#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream in("inventie.in");
ofstream out("inventie.out");

string largeNumber="";

string convertToString(long long int imput)
{long long int t=0;int pos=0;
    string st="";
    while(imput)
    {
        t=t+imput%10;
        t=t*10;
        imput=imput/10;
    }
    while(t)
    {
        st[pos]=t%10;
        pos++;
    }
    return st;
}

int smiley(long long int a, long long int b)
{
    largeNumber="";
    long long int result;
    if(a>b)
    {
        result=a-b;
        out<<result;
    }
    if(b<a)
    {
        result=a-b;
        out<<result;
    }

    largeNumber = convertToString(result);
}

int main()
{long long int a,b,out;
    cin>>a>>b;
    out=smiley(a, b);
    cout<<out;
    return 0;
}
