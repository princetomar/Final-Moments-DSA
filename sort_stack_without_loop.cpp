#include <bits/stdc++.h> 

void sortedInsert(stack<int> &stack, int num)
{
    // base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
       
    int n = stack.top();
    stack.pop();
    
    // recursive call
    sortedInsert(stack, num);
    stack.push(n);
    
    
}
void sortS(stack<int> &stack)
{
    if(stack.empty())
        return;
    
    int topC = stack.top();
    stack.pop();
    
    // recursive call
    sortS(stack);
    
    sortedInsert(stack,topC);
    
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    sortS(stack);
}