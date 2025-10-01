class Solution {
    public:
        int numWaterBottles(int numBottles, int numExchange) {
            int drinked=0, empty = 0;
            while(numBottles >= numExchange)
            {
                numBottles -= numExchange;
                empty += numExchange;
                drinked += numExchange;
                if(empty >= numExchange) {empty -= numExchange; numBottles += 1;}
            }
            drinked += numBottles; empty += numBottles; numBottles = 0;
            if(empty >= numExchange) {
                int r = empty % numExchange;
                drinked += r;
            }
            return drinked;
        }
    };