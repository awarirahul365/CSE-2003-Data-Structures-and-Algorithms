class Solution {
    public List<String> generateParenthesis(int n) {
        
        List<String>vect=new ArrayList();
        String curr="";
        int open=0;
        int close=0;
        func(vect,curr,open,close,n);
        return vect;
    }
    public void func(List<String> vect,String curr,int open,int close,int n)
    {
        if(curr.length()==n*2)
        {
            vect.add(curr);
            return;
        }
        if(open<n)
        {
            func(vect,curr+"(",open+1,close,n);
        }
        if(open>close)
        {
            func(vect,curr+")",open,close+1,n);
        }
    }
}
