class Solution{

	public:
	int calculateMaxSumLength(int arr[], int n, int k)
	{
		int i=0;
		int sublen=0;
		int prev=0;
		int flag=0;
		int ans=0;
		while(i<n)
		{
		    int num=arr[i];
		    if(num<k)
		    {
		        sublen++;
		        i++;
		    }
		    else if(num==k)
		    {
		        flag=1;
		        sublen++;
		        i++;
		    }
		    else
		    {
		        if(flag==1)
		        {
		            ans=ans+sublen;
		        }
		        sublen=0;
		        i++;
		        flag=0;
		    }
		}
		if(flag==1)
		{
		    ans=ans+sublen;
		}
		return ans;
	}
		 

};
