#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="aeiouia";
    int k=3;

    int count =0,maxi=0;
    string str="";

    if(k<=s.length())
    {
    for(int i=0;i<k;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i')
        count++;
    }
    str=s.substr(0,k);
    maxi=count;
    

    int high=k;
    for(int i=0;i<s.length()-k;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i')
        count--;
        if(s[high]=='a'||s[high]=='e'||s[high]=='o'||s[high]=='u'||s[high]=='i')
        count++;
        if(count>maxi)
        {
            maxi=count;
            str="";
            str=s.substr(i+1,k);
        }
        high++;
        
    }
    }
    cout<<maxi<<"   "<<str;
}
