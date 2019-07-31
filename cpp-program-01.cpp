// Converted js program 01 to c++ exercise 

#include <iostream>
#include <iomanip>
using namespace std;

float formatPrice(float y) {
	cout << "$" << fixed << setprecision(2) << y;
    return y;
}


float calculateTax(float x) {
    float tax_rate = 0.08;
    return x * tax_rate;
}

float phonePrice(float pPrice) {
    const float spend_thresold = 200.00;
    const float phone_price = 50.00;
    const float accessories = 10.00;
    float amount = 0;
    float bank_balance = 300.00;

    while (amount < bank_balance) {    
    amount = amount + phone_price;
    
    
    if (amount < spend_thresold) {
        amount = amount + accessories;
        }
    }
    return amount;
}


// main function
int main() {
    
    float pPrice;
    float calcTax;
    float finalPrice;
    pPrice = phonePrice(pPrice);
    calcTax = calculateTax(pPrice);
    
    finalPrice = pPrice + calcTax;
    finalPrice = formatPrice(finalPrice);

    return 0;
}