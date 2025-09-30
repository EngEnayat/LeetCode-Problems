class Solution {
    public:
        string addStrings(string num1, string num2) {
            if(num1.empty()) return num2;
            if (num2.empty()) return num1;
            int remainder = 0;
            int n1 = num1.size()-1, n2 = num2.size()-1;
            string result ="";
            while(n1 >=0 && n2 >= 0)
            {
                int r = (num1[n1] - '0') + (num2[n2] - '0');
                r += remainder;
                if(r <=9) remainder = 0;
                if(r > 9) {remainder = r/10; r %= 10;}
                result += to_string(r);
                n1--; n2--;
            }
            
            while(n1>=0)
            {
                int r = (num1[n1] - '0');
                r += remainder;
                if(r <=9) remainder = 0;
                if(r > 9) {remainder = r/10; r %= 10;}
                result += to_string(r);
                n1--;
            }
            while(n2>=0)
            {
                int r = (num2[n2] - '0');
                r += remainder;
                if(r <=9) remainder = 0;
                if(r > 9) {remainder = r/10; r %= 10;}
                result += to_string(r);
                n2--;
            }
            if(remainder !=0 ) result += to_string(remainder);
            reverse(result.begin(), result.end());
            return result;
        }
    };