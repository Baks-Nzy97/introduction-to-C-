#include <iostream>
using namespace std;

float taxpay(float grosspay);

int main(int argc, char** argv){
	int payrollno,maritalstatus,hoursworked,employees;
	char grade;
	float distancetravelled,mileagerate,mileage,grosspay,basicsalary,wagerate,houseallowance,tax,netpay;
	
	cout<<"Enter the number of employees: ";
	cin>>employees;
	int employee = 0;
	while (employee<employees){
		cout<< "Enter employee payroll number: \n";
		cin>> payrollno;
		cout<< "Enter employee's Grade: \n";
		cin>> grade;
		cout<< "Enter marital status,1 for married and 2 for not married: \n";
		cin>> maritalstatus;
		cout<<"Enter hours worked: \n";
		cin>> hoursworked;
		cout<< "Enter the distance in kilometres travelled by the employee in a month: \n ";
		cin>>distancetravelled;
	
		if(grade == 'A'){
			wagerate = 500;
			mileagerate = 65;
		}
		else{
			wagerate = 700;
			mileagerate = 58;
		}
	
		basicsalary = hoursworked*wagerate;
		mileage = mileagerate*distancetravelled;
		if(maritalstatus== 1){
			houseallowance = 8000;
		}
		else{
			houseallowance=0;
		}
	
		grosspay=basicsalary + mileage+ houseallowance;
		tax=taxpay(grosspay);
		netpay = grosspay - tax;
	
		cout<<"Payrollno: "<<payrollno<<"\n";
		cout<<"Grosspay: "<<grosspay<<"\n";
		cout<<"Tax: "<<tax<<"\n";
		cout<<"Netpay: "<<netpay<<"\n";
		employee ++;
	}	
	return 0;

	
	
}

float taxpay(float grosspay){
	float tax;
	if(grosspay>25000){
		 tax=grosspay*0.1;
	}
	else{
		tax=0;
	}
	return tax;
}
