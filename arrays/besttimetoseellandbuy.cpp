/*
121. Best Time to Buy and Sell Stock
Solved
Easy
Topics
premium lock icon
Companies
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini=INT_MAX,maxi=INT_MIN;
       for(int i=0;i<prices.size();i++){
        mini=min(mini,prices[i]);
        maxi=max(maxi,prices[i]-mini);
       } return maxi;
    }
};/*
Output:
prices = [7,1,5,3,6,4]
Output: 5
*/
