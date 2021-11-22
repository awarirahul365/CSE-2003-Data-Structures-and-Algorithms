int Solution::isPalindrome(string A) {

    int ans=1;
    int low=0;
    int high=A.size()-1;
    while(low<high)
    {
        char first=A[low];
        char last=A[high];
        if(isalnum(first) && isalnum(last))
        {
            char tf=tolower(first);
            char th=tolower(last);
            if(tf!=th)
            {
                ans=0;
                break;
            }
            else
            {
                low++;
                high--;
            }
        }
        else if(isalnum(first) && !isalnum(last))
        {
            high--;
        }
        else if(!isalnum(first) && isalnum(last))
        {
            low++;
        }
        else
        {
            low++;
            high--;
        }
    }
    return ans;
}
