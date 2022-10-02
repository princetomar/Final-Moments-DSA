#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string str)
{
    // Write your code here.
    stack<char> s;
        
        for(int i=0 ; i<str.length() ; i++)
        {
            char ch = str[i];
            
            if(ch == '(' || ch=='{' || ch=='[' )
                s.push(str[i]);
            else{
                if(!s.empty())
                {
                    char topChar = s.top();
                    if((ch == ')' && topChar == '(') || (ch == ']' && topChar == '[') || (ch == '}' && topChar == '{'))
                    {
                        s.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        
        if(s.empty() == true)
            return true;
        return false;
}

int main(){
    cout<<"IS ' [()]{}{[()()]()} ' balanced ? "<<endl;
    if(isValidParenthesis("[()]{}{[()()]()}") == 1 )
        cout<<"Yes";
    else
        cout<<"False";

}