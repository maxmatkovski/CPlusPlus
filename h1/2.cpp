#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout << fixed << setprecision(2);

    double amountDue;
    double amountReceived;

    cout << "Amount due: $" << flush;
    cin >> amountDue;
    cout << "Amount received: $" << flush;
    cin >> amountReceived;

    int amountDueCents;
    int amountReceivedCents;

    amountDueCents = round(amountDue * 100);
    amountReceivedCents = round(amountReceived * 100);

    int totalChange = amountReceivedCents - amountDueCents;
    int dollars;
    dollars = floor(totalChange/100);
    int remainingChange = totalChange - (dollars * 100);
    int quarters = floor(remainingChange/25);
    remainingChange = remainingChange - (quarters * 25);
    int dimes = floor(remainingChange/10);
    remainingChange = remainingChange - (dimes * 10);
    int nickels = floor(remainingChange/5);
    remainingChange = remainingChange - (nickels * 5);
    int pennies = floor(remainingChange/1);
    remainingChange = remainingChange - (pennies * 1);

    cout << endl;
    cout << "Change given:" << endl;
    cout << "dollars -> " << dollars << endl;
    cout << "quarters -> " << quarters << endl;
    cout << "dimes -> " << dimes << endl;
    cout << "nickels -> " << nickels << endl;
    cout << "pennies -> " << pennies << endl;


}
