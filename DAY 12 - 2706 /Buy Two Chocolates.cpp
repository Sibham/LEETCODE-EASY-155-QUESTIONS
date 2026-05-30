class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minPrice = INT_MAX;
        int secminPrice = INT_MAX;

        for(int &price : prices){
            if(price<minPrice){
                secminPrice = minPrice;
                minPrice = price;
            }
            else{
                                             secminPrice = min(secminPrice,price);
            }
        }
        if(minPrice + secminPrice > money){
        return money;
        }
        return money - (minPrice + secminPrice);
    }
};
