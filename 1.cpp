//method 1
void solve(int arr[], int n)
{
    int max_so_far = INT_MIN;
 
   
    for (int i = n - 1; i >= 0; i--)
    {
      
       // if (arr[i] > max_so_far)
        {
            max_so_far = arr[i];
           cout<<arr[i]<<" ";
        }
    }
}
 






// method 2
void solve2(int arr[], int size)
{
  int i, j;
 
  for (i = 0; i < size; i++)
  {
    for (j = i+1; j < size; j++)
    {
        if(arr[i] <= arr[j])
          break;
    }    
    if(j == size) 
    {
        cout<<" "<<arr[i];
    }
  }
}


int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    
      solve2(arr, n);
 
    return 0;
}
