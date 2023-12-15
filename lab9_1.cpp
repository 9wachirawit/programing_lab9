#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double loan, rate, payment;
int year = 1, i = 0;

int main(){    
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> payment;

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
    
    double newrate = (rate*loan)/100;
    double total = loan+newrate;
    double last = total-payment;
    
    while (last > 0) {
    cout << fixed << setprecision(2); 
    cout << setw(13) << left << year; 
    cout << setw(13) << left << loan;
    cout << setw(13) << left << newrate;
    cout << setw(13) << left << total;
    if (payment > total) {
        payment = total;
    }
    cout << setw(13) << left << payment;     
    cout << setw(13) << left << last;
    last = total-payment;
    cout << "\n";
    
    year = year+1;
    loan = last;
    newrate = (rate*loan)/100;
    total = loan+newrate;
    last = total-payment;
    }
    
    cout << fixed << setprecision(2); 
    cout << setw(13) << left << year; 
    cout << setw(13) << left << loan;
    cout << setw(13) << left << newrate;
    cout << setw(13) << left << total;
    if (payment > total) {
        payment = total;
        last = total-payment;
    }
    cout << setw(13) << left << payment;     
    cout << setw(13) << left << last;
    cout << "\n";
    return 0;
}