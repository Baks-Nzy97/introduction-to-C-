#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	char salespersonname[20], regionofsale;
	int Nunits, i;
	float salesvalue, salescommission,SCT, NSC, TSVU, TSVS;
	TSVU=0;
	TSVS=0;
	for (i=0; i<155; i++){
		cout<< "Enter Sales person name: \n";
		cin>>salespersonname;
		cout<<"Enter the region of sale: \n";
		cin>>regionofsale;
		cout<<"Enter the number of units sold: \n";
		cin>>Nunits;
		
		salesvalue= Nunits * 1200;
		if (regionofsale == 'U'){
			salescommission = salesvalue*0.16;
		}
		else{
			salescommission= salesvalue * 0.17;
		}
		if (salescommission > 25000){
			SCT = salescommission * 0.15;
		}
		else{
			SCT == 0;
		}
		NSC = salescommission - SCT;
		if(regionofsale == 'U'){
			TSVU+= salesvalue;
		}
		if(regionofsale == 'S'){
			TSVS+= salesvalue;
		}
		
		cout<< "Sales value is: "<<salesvalue<<"\n";
		cout<<"The net commission earned is: "<<NSC<<"\n";
		cout<<"\n";
		}
	cout<<"\n";
	cout<<"The total sales value in region U is: "<<TSVU<<"\n";
	cout<<"The total sales value in region S is: "<<TSVS<<"\n";
	return 0;	
	}
	

	
	





