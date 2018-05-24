#include<bits/stdc++.h>
using namespace std;

void expEval()
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


stack<int> createStack()
{
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(9);
    s.push(6);
    s.push(10);

    return s;
}

stack<int> insertAtBottom(stack<int> s, int item)
{
    if(s.empty())
        s.push(item);
    else
    {
            int temp = s.top();
            s.pop();
            s = insertAtBottom(s, item);

            s.push(temp);
    }
    return s;
}

stack<int> reverseStack(stack<int> s)
{
    if(!s.empty())
    {
        int temp = s.top();
        s.pop();
        s = reverseStack(s);

        s = insertAtBottom(s, temp);
    }
    return s;
}

void printStack(stack<int> s)
{
    if(s.empty())
        return;
    else{
        cout<<s.top()<<" ";
        s.pop();
        return printStack(s);
    }
}

int main()
{
        //expEval();

        //createToReverse();

        stack<int> s, r;
        s = createStack();
        cout<<"Original Stack : ";
        printStack(s);
        r = reverseStack(s);
        cout<<"\nReversed Stack : ";
        printStack(r);

        //sortStack(s);
}
