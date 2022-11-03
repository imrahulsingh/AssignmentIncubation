//Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the loss profit

#include <iostream>
using namespace std;

//cal profit
int Profit(int costPrice, int sellingPrice)
{
	int profit = (sellingPrice - costPrice);

	return profit;
}

// calculate Loss.
int Loss(int costPrice, int sellingPrice)
{
	int Loss = (costPrice - sellingPrice);

	return Loss;
}


int main()
{
    int costPrice, sellingPrice;
   cout<<" Enter the costprice and sellingPrice \n";
   cin >>costPrice >>sellingPrice;

	if (sellingPrice == costPrice)
		cout << "No profit nor Loss";

	else if (sellingPrice > costPrice)
		cout << Profit(costPrice, sellingPrice) << " Profit ";

	else
		cout << Loss(costPrice, sellingPrice) << " Loss ";

	return 0;
}
