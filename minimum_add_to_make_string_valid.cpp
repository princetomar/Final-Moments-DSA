#include<stdio.h>

int minAddToMakeValid(string str) {
        stack<char> s;
        int count = 0;
        
        for(int i=0 ; i<str.length() ; i++)
        {
            char ch = str[i];
            
            if(ch == '(')
            {
                s.push(ch);
            }
            else{
                // it's a closing bracket
                
                if(s.empty())
                {
                    count++;
                    continue;
                }
                else if(ch == ')' && s.top()!= '(')
                {
                        count++;      
                }
                
                s.pop();
            }
        }
        
        count += s.size();
        
        return count;
    }