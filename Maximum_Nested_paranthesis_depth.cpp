int maxDepth(string s) {
        int ans = 0;
        int temp = 0;
        
        for(int i= 0 ;i<s.length() ; i++)
        {
            if(s[i] == '(')
            {
                temp += 1;
                ans = max(ans, temp);
            }
            else if(s[i] == ')'){
                temp -= 1;
                ans = max(ans, temp);
            }
        }
        
        return ans;
    }
