// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input = "1a2b5c";
    vector <int> intinputs;
    vector <char> charinputs;
    vector <char> result;
    int len = input.length();
    for (int i=0;i<len;i+=2)
    {
        char retrieved = input[i];
        int ret = retrieved - '0';
        intinputs.push_back(ret);
    }
    for (int i=1;i<len;i+=2)
    {
        char retrieved = input[i];
        charinputs.push_back(retrieved);
    }
    for(int i=0;i<3;i++)
    {
        int count = intinputs[i];
        for(int j=0;j<count;++j)
        {
            result.push_back(charinputs[i]);
        }
    }
    
    for(char m :result )
    {
        cout<<m;
    }

}









