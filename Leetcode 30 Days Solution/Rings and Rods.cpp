struct colors{
    int red;
    int green;
    int blue;
};
class Solution {
public:
    int countPoints(string rings) {
        
        int n=10;
        colors arr[10];
        int count=0;
        for(int i=0;i<10;i++)
        {
            arr[i].red=0;
            arr[i].green=0;
            arr[i].blue=0;
        }
        for(int i=0;i<rings.length();i++)
        {
            char ch=rings[i];
            char pos=rings[i+1];
            int p=(int)pos-48;
            if(ch=='R')
            {
                arr[p].red=1;
            }
            if(ch=='G')
            {
                arr[p].green=1;
            }
            if(ch=='B')
            {
                arr[p].blue=1;
            }
        }
        for(int i=0;i<10;i++)
        {
            if(arr[i].red==1 && arr[i].green==1 && arr[i].blue==1)
            {
                count++;
            }
        }
        return count;
    }
};
