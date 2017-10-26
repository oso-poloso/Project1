//
//  main.cpp
//  Project
//
//  Created by Adrian Salazar on 10/26/17.
//  Copyright © 2017 Adrian Salazar. All rights reserved.
//

#include <iostream>

using namespace std;
const double PER_MILE = 0.58;


void carRental();
void costPerMile();

int main()
{
    tripLength();
    airFair();
    cout << endl;
    conferenceFees();
    carRental();
    return 0;
}

/***********************************************
    Trip Length
    Function gets the total number of days spent
    on the trip.
***********************************************/
void tripLength()
{
    int days;
    cout << "Amount of days on trip: ";
    cin >> days;
}


/********************************************
AirFair Fees
********************************************/
void airFair()
{
    double cost, reimbursement;
    cout << "Enter cost of round trip: ";
    cin >> cost;
    reimbursement = cost;
    cout << cost << " " << reimbursement;
}

/***********************************************
 void carRental() function determines the amount
 of cars rented, if a car was rented at all
 **********************************************/

void carRental(){
    char ch;
    double carCost;
    char privateCar;
    
    cout << "Did you rent a car? (y/n): ";
    cin >> ch;
        if (ch == 'y' || ch == 'Y'){
            cout << "Enter cost of the rental car: ";
            cin >> carCost;
            }
        else if(ch == 'n' || ch =='N'){
            cout << "Was a private vehicle used? (y/n): ";
            cin >> privateCar;
            
            if( privateCar == 'y' ||  privateCar == 'Y' ){
            costPerMile();
            }
            else if(privateCar == 'n' || privateCar == 'N'){
                carCost = 0;
            }
        else if (ch != 'Y' || ch!= 'y' || ch != 'N' || ch != 'n'){
            cout << "Error. Invalid input, please try again";
            cin >> ch;
            }
        }
}

/************************************
 
 Miles Driven
 Vehicle allowance is $.58 per mile.
 
 ************************************/

void costPerMile(){
    
    double carCost;
    
    int milesDriven;
    
    cout << "How many miles were driven? ";
    cin >> milesDriven;
    
    carCost = milesDriven * PER_MILE;
    
    cout << "Total is: $ " << carCost << endl;
}
/**********************************
    Taxi Fees
**********************************/

/***********************************
    Conference Fees
***********************************/
void conferenceFees()
{
    double conferenceFee, reimbursement;
    cout << "Enter cost of conference registration fees: ";
    cin >> conferenceFee;
    reimbursement = conferenceFee;
    cout << conferenceFee << " " << reimbursement;
}



