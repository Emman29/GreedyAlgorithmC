#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("The least amount of coins you can use is %i coins\n", coins);
    printf("If you give %i quarters\n", quarters);
    printf("And you give %i dimes\n", dimes);
    printf("And you give %i nickels\n", nickels);
    printf("And you give %i pennies\n", pennies);
}

int get_cents(void)
{
    //gets the user's input
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;          //initialize variable for quarters
    while (cents >= 25)        //can a quarter be taken from the number of cents
    {
        cents = cents - 25;    //if so, subtract a quarter
        quarters++;            //and add to the number of quarters.

    }
    return quarters;           //when done, return the value
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int penny = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        penny++;
    }
    return penny;
}
