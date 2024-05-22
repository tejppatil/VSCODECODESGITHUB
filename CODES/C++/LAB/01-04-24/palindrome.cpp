//Write a C++ program to check palindromes through string.
#include<iostream>
using namespace std;
void isstring(string s);
int main()
{
    string s;
    cout<<endl<<"Enter a string:";
    cin>>s;
    int b;
    isstring(s);
    cout<<endl;
    return 0;
}
void isstring(string s)
{
    string b;
    b=s;
    int leng=s.length();
    for(int i=0;i<leng;i++)
    {
        b[leng-i-1]=s[i];
    }
    if(b==s)
    {
        cout<<"Entered string is a palindrome."<<endl;
    }
    else
    {
        cout<<"Entered string is not a palindrome."<<endl;
    }
}