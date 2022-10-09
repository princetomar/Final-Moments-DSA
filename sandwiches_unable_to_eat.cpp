#include<iostream>
#include<vector>
using namespace std;


int countStudents(vector<int>& students, vector<int>& sandwiches) {
    
    int circular = 0;
    int square   = 0;
    
    for(int i=0 ; i<students.size(); i++)
    {
        if(students[i] == 0)
        {
            // found an circular sandwich student
            circular ++;
        }else{
            square++;
        }
    }
    
    for(int i=0 ; i< sandwiches.size() ; i++)
    {
        if(sandwiches[i] == 0)
        {
            if(circular == 0)
            {
                return square;
            }
            circular -= 1;
        }else{
            
            if(square == 0)
                return circular;
            square -=1;
        }
    }
    
    return circular + square;
}

int main()
{
    
    int arr[] = {1,1,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> students(arr, arr+n);

    int arr2[] = {1,1,0,0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> sandwiches(arr2, arr2+n2);
    
    cout<<countStudents(students, sandwiches);
    return 0;
}