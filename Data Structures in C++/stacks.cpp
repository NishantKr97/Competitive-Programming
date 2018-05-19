#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s, m;
    string exp = "[(])";

    int len = exp.length(), flag = 1;
    for(int i=0;i<len;i++)
    {
        if(exp[i] == '{' || exp[i] == '[' || exp[i] == '(' )
            s.push(exp[i]);
        else
        {
            if(exp[i] == ')'  && s.top()!= '(')
            {
                flag = 0;
                break;
            }
            else
            {
                s.pop();
                continue;
            }

            if(exp[i] == ']'  && s.top()!= '[')
            {
                flag = 0;
                break;
            }
            else
            {
                s.pop();
                continue;
            }

            if(exp[i] == '}'  && s.top()!= '{')
            {
                flag = 0;
                break;
            }
            else
            {
                s.pop();
                continue;
            }
        }
    }

    if(flag == 1 && s.empty())
        cout<<"True";
    else
        cout<<"False";


}
