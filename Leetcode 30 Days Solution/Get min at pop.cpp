//User function Template for C++

/* inserts elements of the array into 
   stack and return the stack
*/
stack<int>_push(int arr[],int n)
{
   stack<int>mainstc;
   stack<int>suppstc;
   stack<int>resstc;
   mainstc.push(arr[0]);
   suppstc.push(arr[0]);
   resstc.push(arr[0]);
   for(int i=1;i<n;i++)
   {
      int tp=suppstc.top();
      if(arr[i]>tp)
      {
          mainstc.push(arr[i]);
          resstc.push(tp);
      }
      else if(arr[i]<tp)
      {
          mainstc.push(arr[i]);
          suppstc.push(arr[i]);
          resstc.push(arr[i]);
      }
   }
   return resstc;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
