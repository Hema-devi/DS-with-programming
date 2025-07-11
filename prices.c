#include<stdio.h>
int main(){
    int prices[5] = {44000, 54000, 46000, 47000, 48000};
    int maxProfit = prices[1] - prices[0];
    
    for(int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    printf("Maximum Profit = %d\n", maxProfit);
    return 0;
}
