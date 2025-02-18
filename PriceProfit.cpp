#include <vector>
#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 10000;
        int maxProfit = 0;
        
        for (int price : prices) {
            minPrice = min(minPrice, price);
            
            maxProfit = max(maxProfit, price - minPrice);
        }
        
        return maxProfit;
    }
};
// [7,1,5,3,6,4]

int main()
{
    Solution obj1;
    int num[6] = {7,1,5,3,6,4};
    // cout << obj1.maxProfit() << endl;
    return 0;
}
        // vector <int> prices;
        // int number;
        // cin >> number;
        // for(int i=0; i<number;i++)
        // {
        //     int x;
        //     cin >> x;
        //     prices.push_back(x);
        // }
        // int sign = prices[0];
        // int num =0;
        // for(int i=1; i<prices.size(); i++)
        // {
        //     if(prices[i] < sign)
        //     {
        //         num = i;
        //         sign = prices[i];
        //     }
        // }
        // if(sign == prices[prices.size() -1]) return 0;
        // int profit = -100;
        // for(int i=num; i<prices.size();i++)
        // {
        //     if(prices[i] > profit)
        //     {
        //         profit = prices[i];
        //     }
        // }
        // profit = profit - sign;
        // return profit;