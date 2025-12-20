#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, rate, pay;
    double prevBalance, interest, total, payment, newBalance;
    int year = 1;


    cout << "Enter initial loan: ";
    cin >>loan;

    cout << "Enter interest rate per year (%): ";
    cin >>rate;

    cout << "Enter amount you can pay per year: ";
    cin >>pay;
    
    
    cout << fixed << setprecision(2);
    cout << "EndOfYear#   PrevBalance  Interest     Total        Payment      NewBalance\n";

    prevBalance = loan;


    while (prevBalance > 0) {
        interest = prevBalance * (rate / 100.0);
        total = prevBalance + interest;

        
        if (total <= pay) {
            payment = total;
        } else {
            payment = pay;
        }

        newBalance = total - payment;

        
        cout << setw(13) << left <<year
             << setw(13) << left <<prevBalance
             << setw(13) << left <<interest
             << setw(13) << left <<total
             << setw(13) << left <<payment
             << setw(13) << left <<newBalance << endl;

        prevBalance = newBalance;
        year++;
    }

    return 0;
}
