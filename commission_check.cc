#include <iostream>
using namespace std;

int main() {
    double sales_amount;
    double commission_amount;
    int commission_percentage;

    cout << "Enter the sales amount: $";
    cin >> sales_amount;

    if (sales_amount <= 10000) {
        commission_percentage = 10;
        commission_amount = sales_amount * 0.10;
    } else if (sales_amount <= 15000) {
        commission_percentage = 15;
        commission_amount = sales_amount * 0.15;
    } else {
        commission_percentage = 20;
        commission_amount = sales_amount * 0.20;
    }

    cout << "Your percentage of the sales is: " << commission_percentage <<endl;
    cout << "The commission amount is: $" << commission_amount << endl;

    return 0;
}
