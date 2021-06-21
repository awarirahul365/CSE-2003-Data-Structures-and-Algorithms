class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        
        char ch[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                ch[i][j]='?';
            }
        }
        for(int i=0;i<moves.size();i++)
        {
            int xcod=moves[i][0];
            int ycod=moves[i][1];
            if(i%2==0)
            {
                ch[xcod][ycod]='X';
            }
            else
            {
                ch[xcod][ycod]='O';
            }
        }
        string res1="";
        string res2="";
        string res3="";
        string res4="";
        string res5="";
        string res6="";
        string res7="";
        string res8="";
        res1=res1+ch[0][0]+ch[1][1]+ch[2][2];
        res2=res2+ch[0][0]+ch[0][1]+ch[0][2];
        res3=res3+ch[1][0]+ch[1][1]+ch[1][2];
        res4=res4+ch[2][0]+ch[2][1]+ch[2][2];
        res5=res5+ch[0][0]+ch[1][0]+ch[2][0];
        res6=res6+ch[0][1]+ch[1][1]+ch[2][1];
        res7=res7+ch[0][2]+ch[1][2]+ch[2][2];
        res8=res8+ch[0][2]+ch[1][1]+ch[2][0];
        string winner="";
        if(res1=="XXX" || res2=="XXX" || res3=="XXX" || res4=="XXX" || res5=="XXX" || res6=="XXX" || res7=="XXX" || res8=="XXX")
        {
            winner=winner+"A";
        }
        if(res1=="OOO" || res2=="OOO" || res3=="OOO" || res4=="OOO" || res5=="OOO" || res6=="OOO" || res7=="OOO" || res8=="OOO")
        {
            winner=winner+"B";
        }
        if(winner.size()==0 && moves.size()==9)
        {
            winner=winner+"Draw";
        }
        if(winner.size()==0 && moves.size()<9)
        {
            winner=winner+"Pending";
        }
        return winner;
    }
};
