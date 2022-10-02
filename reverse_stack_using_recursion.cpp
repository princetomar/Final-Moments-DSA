#include<iostream>
#include<stack>
using namespace std;

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

void reverseStack(stack<int> &stack)
{ 
    if(stack.empty())
        return;
    
    int num = stack.top();
    stack.pop();
    
    // recursive call
    reverseStack(stack);
    push(stack,num);

}

stack<int> Reverse(stack<int> st){
    reverseStack(st);
    return st;
}

