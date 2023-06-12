int calculateMinPatforms(int arr[], int dep[], int n) {
    sort(arr,arr+n);
    sort(dep,dep+n);
 
    int ans=1;
    int count=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j]) 
        {
            count++;
            i++;
        }
        else 
        {
            count--;
            j++;
        }
        ans=max(ans,count);
    }
    return ans;
}