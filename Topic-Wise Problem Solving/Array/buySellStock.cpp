#include<iostream>
#include<vector>
using namespace std;

int buyAndSellStockToMaxProfit(vector<int>& prices)
{
    int mini = prices[0],maxi = prices[0];
    int n = prices.size();
    int maxCost = 0;

    for(int i = 0;i<n;i++)
    {
        if(mini > prices[i])
        {
            maxCost += (maxi - mini);
            mini = prices[i];
            maxi = prices[i];
        }
        else{
            maxi = prices[i];
        }
    }
    maxCost += (maxi - mini);
    return maxCost;
}

int main()
{
    int days;
    cout <<"Enter No Of Days of Stock Marketing : ";
    cin >> days;
    vector<int>prices(days);
    cout <<"Enter The Price Of The Stock\n";
    for(int i = 0;i<days;i++)
    {
        cout <<"Day" <<i+1 <<" : ";
        cin >> prices[i];
    }

    int maxProfit = buyAndSellStockToMaxProfit(prices);
    cout <<"maxProfit : " <<maxProfit <<endl; 

    return 0;
}