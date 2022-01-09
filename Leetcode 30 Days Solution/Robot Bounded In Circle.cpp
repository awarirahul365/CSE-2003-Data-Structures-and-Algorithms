class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int x=0;
        int y=0;
        char dir='N';
        string temp=instructions;
        for(int i=0;i<3;i++)
        {
            instructions=instructions+temp;
        }
        for(int i=0;i<instructions.length();i++)
        {
            char ch=instructions[i];
            if(ch=='G')
            {
                if(dir=='N')
                {
                    y++;
                }
                else if(dir=='S')
                {
                    y--;
                }
                else if(dir=='E')
                {
                    x++;
                }
                else
                {
                    x--;
                }
            }
            else if(ch=='L')
            {
                if(dir=='N')
                {
                    dir='W';
                }
                else if(dir=='W')
                {
                    dir='S';
                }
                else if(dir=='S')
                {
                    dir='E';
                }
                else
                {
                    dir='N';
                }
            }
            else
            {
                if(dir=='N')
                {
                    dir='E';
                }
                else if(dir=='E')
                {
                    dir='S';
                }
                else if(dir=='S')
                {
                    dir='W';
                }
                else
                {
                    dir='N';
                }
            }
        }
        if(x==0 && y==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
