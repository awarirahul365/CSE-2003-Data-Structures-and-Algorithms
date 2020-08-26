class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string>vect;
        string first="Fizz";
        string second="Buzz";
        string third="FizzBuzz";
        for(int i=1;i<=n;i++)
        {
            if((i%3==0) && (i%5!=0))
            {
                vect.push_back(first);
            }
            else if((i%3!=0) && (i%5==0))
            {
                vect.push_back(second);
            }
            else if((i%3==0) && (i%5==0))
            {
                vect.push_back(third);
            }
            else
            {
                string p;
                p=to_string(i);
                vect.push_back(p);
            }
        }
        return vect;
        
    }
};
