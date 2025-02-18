class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0 || x == 1) return 1;
        if(x == -1 && n>0)
        {
            if(n%10 == 0) return 0;
            else return -1;
        }
        double res =x;
        if(n>0)
        {
            for(int i=1; i<n;i++)
            {
                res *= x;
            }
            return res;
        }
        else
        {
        if(x == -1 && n<0)
        {
            if(n%10 == 0) return -1;
            else return 1;
        }

            double res = x;
            long long m = -1;
            m*=n;
            for(int i=1; i<m;i++)
            {
                res *= x;
                if(1/res == 0) return 0;
            }    
            return 1/res;
        }
    }
};