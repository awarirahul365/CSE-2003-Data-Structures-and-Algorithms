class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        int xcod;
        int ycod;
        int flag=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='R')
                {
                    xcod=i;
                    ycod=j;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        int cs1=0;
        int cs2=0;
        int cs3=0;
        int cs4=0;
        for(int i=xcod+1;i<8;i++)
        {
            if(board[i][ycod]=='p')
            {
                cs1=1;
                break;
            }
            else if(board[i][ycod]=='B' && cs1==0)
            {
                break;
            }
        }
        for(int i=xcod-1;i>=0;i--)
        {
            if(board[i][ycod]=='p')
            {
                cs2=1;
                break;
            }
            else if(board[i][ycod]=='B' &&  cs2==0)
            {
                break;
            }
        }
        for(int i=ycod+1;i<8;i++)
        {
            if(board[xcod][i]=='p')
            {
                cs3=1;
                break;
            }
            else if(board[xcod][i]=='B' && cs3==0)
            {
                break;
            }
        }
        for(int i=ycod-1;i>=0;i--)
        {
            if(board[xcod][i]=='p')
            {
                cs4=1;
                break;
            }
            else if(board[xcod][i]=='B' && cs4==0)
            {
                break;
            }
        }
        return cs1+cs2+cs3+cs4;
    }
};
