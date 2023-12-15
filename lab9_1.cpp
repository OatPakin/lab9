#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan , rate ,pay ,pays; 
	int year;
	year =1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
    pays = pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	
	cout << fixed << setprecision(2); 
	while(loan > 0 ){
	
	cout << setw(13) << left << year;  //EndOfYear#
	 year++;
	cout << setw(13) << left << loan; //PrevBalance
	 
	cout << setw(13) << left << ((loan*rate)/100); //Interest
	cout << setw(13) << left << (loan+((loan*rate)/100)); //Total
	if((loan+((loan*rate)/100)) > pay){
	cout << setw(13) << left << pay;} //Payment
	else {
		pay = (loan+((loan*rate)/100));
		cout << setw(13) << left << pay;}
	    loan = (loan+((loan*rate)/100))-pay;

	cout << setw(13) << left << loan; //NewBalance
	 if(pays != pay) break;
	cout << "\n";	
	
	}

	return 0;
}
