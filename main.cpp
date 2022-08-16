/*************************************
 * Tim Loveland
 * 8/14/2022    
 * Section 8 Challenge
 * 
 * For this program I will be using US dollars and cents
 * 
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should then display how to provide that change to the user.
 * 
 * In the US:
 *  1 dollar is 100 cents
 *  1 quarter is 25 cents
 *  1 dime is 10 cents
 *  1 nickel is 5 cents, and
 *  1 penny is 1 cent
 * 
 * Here is a sample run:
 * 
 * Enter an amount in cents: 92
 * 
 * You can provide the change as follows:
 * dollars: 0
 * quarters: 3
 * dimes: 1
 * nickels: 1
 * pennys: 2
 * 
 * Use modulo operator
 * 
 * Pseudocode:
 *  Display program
 *  Ask user to enter amount in cents
 *  Calculate having 100 cents is a dollar,
 *      determine how many dollars in the cents,
 *      subtract the amount in dollars from the cents,
 *      store the remainder in the balance.
 *      Use the balance to determine how many quarters,
 *      subtract quarters from the balance,
 *      store the remainder in the balance.
 *      Use the balance to determine how many dimes.
 *      Subtract the dimes from the balance,
 *      store the remainder in the balance.
 *      Use the the balance to determine how many nickels,
 *      Subtract the nickels from the balance,
 *      store the remainder in pennies.
 *  
 *  Display output
 * **********************************/
// Preprocessor directive
#include <iostream>
#include <iomanip> 
using namespace std;

// Function prototypes go here  

int main()
{
    // Define variables
    int cents {};
    // Dollar, quarter, dime, nickel amount
    const int dollar_amount {100};
    const int quarter_amount {25};
    const int dime_amount {10};
    const int nickel_amount {5};
    
    // Ask user the enter number of cents
    cout << "Enter the amount of cents you have: ";
    cin >> cents;
    
    // Store balance and money amount for calculation
    int balance {};
    int dollars {}; 
    int quarters {}; 
    int dimes {};
    int nickels {};
    int pennies {};
    
    // Determine dollar amount
    dollars = cents / dollar_amount;
    // Determine balance
    balance = cents % dollar_amount;
    
    // Determine quarter amount
    quarters = balance / quarter_amount;
    // Determine balance
    balance %= quarter_amount;
    
    // Determine dime amount
    dimes = balance / dime_amount;
    // Determine balance
    balance %= dime_amount;
    
    // Determine nickel amount
    nickels = balance / nickel_amount;
    // Determine balance
    balance %= nickel_amount;
    
    // Determine pennies
    pennies = balance;
    
    // Display amount to user
    cout << "You can provide the change as follows: " << endl;
    cout << "\tDollars: " << dollars << endl;
    cout << "\tQuarters: " << quarters << endl;
    cout << "\tDimes: " << dimes << endl;
    cout << "\tNickels: " << nickels << endl;
    cout << "\tPennies: " << pennies << endl;
    
    
	return 0;
}
