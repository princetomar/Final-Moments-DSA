//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        // Approach
        /*
        suppose front and rear at start
        if(travel possible means petrol - distance >=0)
            rear++;
        if(front == rear)
            circle is complete
        else 
            // means travel not possible because of less petrol
            front = rear + 1;
            start = front;
            rear = front;
        
        */
        //Your code here
        int deficit = 0;
        int balance = 0;
        int start = 0;
        
        for(int i=0 ; i<n ; i++){
            balance += p[i].petrol - p[i].distance;
            if(balance <0){
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }
        
        if(deficit + balance >= 0)
            return start;
        else
            return -1;
        
             
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends