#include<bits/stdc++.h>
using namespace std;

void printSpan(int arr[], int n)
{
    stack<int> s;
    s.push(0);

    for (int i = 0; i < n; i++)
    {
        /* code */
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            /* code */
            s.pop();
        }

        int span = s.empty() ? i+1 : i- s.top();
        cout<<span<<" ";
        s.push(i);
        
    }
    
}

int main(){
    
    int arr[4] = {10,20,30,40};
    printSpan(arr,4);
}