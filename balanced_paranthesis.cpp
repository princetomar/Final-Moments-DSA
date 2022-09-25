#include<bits/stdc++.h>
using namespace std;

bool isMatching(char a, char b){
	return ((a=='(' && b==')') || (a=='{' && b == '}') || (a=='[' && b==']'));
}
bool isBalancedParanthesis(string str)
{
	stack<int> s;
	for(int i= 0 ;i< str.length(); i++)
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
			s.push(str[i]);
		else{

			if(s.empty() == true)
				return false;
			else if(isMatching(s.top(),str[i]) == false)
				return false;
			else
				s.pop();
		}
	}

	return s.empty() == true;
}
int main()
{
	if(isBalancedParanthesis("[[]]") == 1)
		cout<<"True";
	else{
		cout<<"False";
	}

	return 0;
}
