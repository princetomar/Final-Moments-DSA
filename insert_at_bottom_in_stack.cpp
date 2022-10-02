#include <bits/stdc++.h> 

void push(stack<int>& s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    
    int top = s.top();
    s.pop();
    
    push(s,x);
    s.push(top);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    push(myStack, x);
    return myStack;
}
