#include<bits/stdc++.h> 
using namespace std; 
  

int main() 
{ 
    int coins[] =  {9, 6, 5, 1}; 
    int m = sizeof(coins)/sizeof(coins[0]); 
    int V = 11; 
    cout << "Minimum number of coins"
         << minCoins(coins, m, V); 
    return 0; 
} 
