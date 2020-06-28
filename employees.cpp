#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int , char** ) {
	int payrollno, i;
	char grade;
	char name[50];
	float wagerate,hoursworked,pay,totalpay;
	totalpay=0;
	
	for(i=0;i<3;i++)
	{
		cout<<"enter employee name: \n";
		gets(name);
		//cin>>name;
		cout<<"enter employee payroll number: \n";
		cin>>payrollno;
		cout<<"enter employee grade: \n";
		cin>>grade;
		cout<<"enter hours worked: \n";
		cin>>hoursworked;
		
		if(grade=='A')
		{wagerate = 400;
		}
		else{
			wagerate=300;
		}
		
		if(hoursworked >=40)
		{pay = ((hoursworked-40)*1.5*wagerate)+(wagerate *40);
		}else
		{pay = hoursworked*wagerate;
		}
		totalpay=totalpay+pay;
		
		cout<<"employee name: "<<name<<"\n";
		cout<<"payroll number: "<<payrollno<<"\n";
		cout<<"Pay: "<<pay<<"\n";
	}
	cout<<"total pay: "<<totalpay<<"\n";
	return 0;
}
