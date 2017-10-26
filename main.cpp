//
//  main.cpp
//  Project
//
//  Created by Adrian Salazar on 10/26/17.
//  Copyright © 2017 Adrian Salazar. All rights reserved.
//

#include <iostream>
using namespace std;


void carRental();
void costPerMile();

int main(){
    
    carRental();
    
    return 0;
}
/***********************************************
 
 void carRental() function determines the amount
 of cars rented, if a car was rented at all
 
 **********************************************/

void carRental(){
    char ch;
    double PER_MILE;
    char privateCar;
    
    cout << "Did you rent a car? (y/n): ";
    cin >> ch;
        if (ch == 'y' || ch == 'Y'){
            cout << "Enter cost of the rental car: ";
            cin >> PER_MILE;
            }
        else if(ch == 'n' || ch =='N'){
            cout << "Was a private vehicle used? (y/n): ";
            cin >> privateCar;
            
            if( privateCar == 'y' ||  privateCar == 'Y' ){
            costPerMile();
            }
            else if(privateCar == 'n' || privateCar == 'N'){
                PER_MILE = 0;
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
    
    double PER_MILE;
    
    int milesDriven;
    
    cout << "How many miles were driven? ";
    cin >> milesDriven;
    
    PER_MILE = milesDriven * 0.58;
    
    cout << "Total is: $ " << PER_MILE << endl;
}
