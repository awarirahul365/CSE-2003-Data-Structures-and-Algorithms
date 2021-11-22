
int desfunc(vector<int> &A,int ldes,int hdes,int B)
{
    int indexdes=-1;
    while(ldes<=hdes)
    {
        int mdes=(ldes+hdes)/2;
        if(A[mdes]==B)
        {
            indexdes=mdes;
            break;
        }
        else if(A[mdes]>B)
        {
            ldes=mdes+1;
        }
        else
        {
            hdes=mdes-1;
        }
    }
    return indexdes;
}
int ascfunc(vector<int> &A,int lasc,int hasc,int B)
{
    int indexasc=-1;
    while(lasc<=hasc)
    {
        int masc=(lasc+hasc)/2;
        if(A[masc]==B)
        {
            indexasc=masc;
            break;
        }
        else if(A[masc]<B)
        {
            lasc=masc+1;
        }
        else
        {
            hasc=masc-1;
        }
    }
    return indexasc;
}
int funcmax(vector<int> &A)
{

    int i1;
    int l1=0;
    int h1=A.size()-1;
    while(l1<=h1)
    {
        int m1=(l1+h1)/2;
        if(A[m1]>A[m1-1] && A[m1]>A[m1+1])
        {
            i1=m1;
            break;
        }
        else if(A[m1]<A[m1-1])
        {
            h1=m1-1;
        }
        else
        {
            l1=m1+1;
        }
    }
    return i1;
}
int Solution::solve(vector<int> &A, int B) {

    int maxelement=funcmax(A);
    if(A[maxelement]==B)
    {
        return maxelement;
    }
    else if(A[maxelement]>B)
    {
        int ascindex=ascfunc(A,0,maxelement,B);
        return ascindex;
    }
    else
    {
        int desindex=desfunc(A,maxelement,A.size()-1,B);
        return desindex;
    }
}
