class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i =0;
        int max = 0;
        for(std::size_t k=1; k< prices.size();++k){
            int delta = prices[k]-prices[i];
            if(delta>=0){
                if(delta>max) max = delta;
            }else if(delta<0){
                i = k;
            }
        }
    
        return max;
    }
};
