#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    //char ch,ch1;

    std::vector<char>ch,ch1;
    string str;


    while(getline(cin,ch))
    {
        if(c==0 && ch==34)
        {
            ch1.push_back('`');
            ch1.push_back('`');
            c++;
        }
        else if(c==1 && ch==34)
        {
            ch1.push_back(39);
            ch1.push_back(39);
            c--;
        }
        else ch1.push_back(ch);
        cout<<str<<endl;
    }
}
