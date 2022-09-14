vector<int> repeatAndMissing(vector<int> &A)
{
   vector<int>res;
    int n= A.size();
    vector<bool>vis(n+1,false);
    for(int i=0;i<n;i++){
        if(vis[A[i]]) res.push_back(A[i]);
        vis[A[i]]=true;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            res.push_back(i);
            break;
        }
    }
    return res;
}
