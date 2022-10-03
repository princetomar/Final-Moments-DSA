#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
   
    // odd length str
    if(str.length() % 2 == 1)
        return -1;
   
    stack<char> s;
    for(int i=0 ; i<str.length() ; i++)
    {
        char ch = str[i];
        if(ch == '{')
            s.push(ch);
        else{
            // ch is a closed bracket
            
            if(!s.empty() && s.top() == '{'){
                s.pop();
            }else{
                s.push(ch);
            }
        }
    }
      // stack contains  invalid expression now
        // Now create the count - a for closed bracket and b for open bracket
    int a = 0,b=0;
    while(!s.empty()){ 
        if(s.top() == '{')
            b++;
        else
            a++;

        s.pop();
    }

    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}