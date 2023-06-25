//Approch 1
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<endl;  
    sort(arr,arr+n);
    int secondlarge=arr[n-2];
    cout<<secondlarger<<endl;
}
// TC = O(nlogn) SC=O(1)

//Approch 2
void getElements(int arr[],int n)
{
    if(n== 0 || n==1)
        cout<<-1<<""<<-1<<endl;
    
    int small=INT_MAX, secondsmall=INT_MAX;
    int large=INT_MIN, secondlarge=INT_MIN;
    
    for(int i = 0; i < n; i++){
        small=min(small, arr[i]);
        large=max(large, arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        if (arr[i] < secondsmall && arr[i] != small)
            secondsmall=arr[i];
        if (arr[i] > secondlarge && arr[i] != large)
            secondlarge=arr[i];
    }
    
    cout<<secondlarge<<endl;
    cout<<secondsmall<<endl;
}

//TC=O(N) SC=O(1)



