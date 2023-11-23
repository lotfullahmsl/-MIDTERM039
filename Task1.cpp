#include <iostream>
using namespace std;

int main(){
	float Price, Quantity, TaxRate, Price_Without_Tax, Discount;
	string Restart;
	do
	{
		cout << "Enter Price Of Prouduct: ";
		cin >> Price;
		cout << "Enter The Quantity Of Prouduct: ";
		cin >> Quantity;
		
		if (Quantity >= 10){
				cout << "You Have recive 10% Discount!\n";
				cout << "Enter Tax Rate of the ithem(%): ";
				cin >> TaxRate;
				Price_Without_Tax=TaxRate*Price/100;
				Discount=10*Price/100;
				cout << "Your Total Tax is " << Price_Without_Tax << endl;
				cout << "Your Bill with 10% Discount is: " << (Price - Price_Without_Tax )- Discount;
		}
		else if (Quantity <= 0){
			cout << "Invalid Amount Of Quantity!" << endl;
			continue;
		}
		
		else {
		cout << "Enter Tax Rate of the ithem(%): ";
		cin >> TaxRate;
		 if (TaxRate<=0){
		 	cout << "Invalid Tax Rate!" << endl;
		 	continue;
		 }
		 else if (TaxRate>Price){
		 	cout << "Tax Rate Should Be Less than Price!"<<endl;
		 	continue;
		 }
		 
		 else {
		 	Price_Without_Tax=TaxRate*Price/100;
		 }
		
		cout << "Your Total Tax is " << Price_Without_Tax << endl;
		cout << "Your Bill Without Tax is " << Price + Price_Without_Tax;
			}
		
		cout << "\nDo You Want TO Restart the Program(y/n): ";
		cin >> Restart;
	}
	while (Restart =="Y" || Restart=="y");
	return 0;
}
