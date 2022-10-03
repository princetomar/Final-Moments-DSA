#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(int i=0 ; i<s.length();  i++)
    {
        char ch = s[i];
        if(ch == '(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
            st.push(s[i]);
        else{
            // Either ch is ( - closing bracket or lower case letter
            if(ch == ')')
            {
                 bool isReduntantBracket = true;
                // iterate over stack and check that before 
                // founding an opening bracket 
                //        Do we have a operator or not 
                //             if(yes)
                //                    continue
                //             else
                //                    return false;
                
                while(st.top() != '(')
                {
                   
                    char topChar = st.top();
                    if( topChar=='+' ||topChar=='-' || topChar=='*' || topChar=='/')
                    {
                         isReduntantBracket = false;
                    }
                    
                    st.pop();
                }
                if(isReduntantBracket == true)
                    return true; 
                st.pop();
            }
        }
    }
    
    return false;
}
