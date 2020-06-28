#include <iostream>
using namespace std;	





int main(int argc, char** argv) {
	int units,price, salesvalue,purchases;
	char spname[30] , cname[30],product;
	float discount, VAT,NPV,total;
	
	cout<<"Enter the number of purchases: ";
	cin>>purchases;
	int purchase = 0; //a customer can only make one purchase
	while (purchase < purchases){
		cout<< "Enter the salesperson name: \n"; // asks for the the sales person  who did the sales.
		cin>> spname;
		cout<< "Enter customer's name: \n";
		cin>> cname;
		cout<< "Enter the type of product Purchased(should be in caps):\n";
		cin>> product;
		cout<<"Enter the number of units purchased: \n";
		cin>>units;
	
		if(product == 'X'){
			salesvalue = 400*units;	
		}
		else if (product == 'Y'){
			salesvalue = 530*units;	
		}
		else{
			salesvalue = 390*units;
		}
		if (product == 'X' or product == 'Z'){
			if(salesvalue >= 15000){
				discount = salesvalue* 0.1;
			}
			else{
			discount = salesvalue*0.05;
			}	
		}
		else{
			discount = 0;
		}
		NPV = salesvalue - discount;
		if(product == 'Y'){
			VAT=NPV*0.18;}
		else{
			VAT = 0;
		}
		total= NPV + VAT;
	
		cout<<"You were served by: "<<spname<<"\n";
		cout<<"The total amount to pay is: "<<total<<". \n";
		purchase ++;
	}
	return 0;
}

	
	
	
	

