//
//  Controller.cpp
//  SampleProject
//
//  Created by Brailow, Parker on 1/25/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "Controller.hpp"
#include <math.h>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    string name = "Parker Brailow";
    cout << name << endl;
    for (int index = 13; index < 32; index ++)
    {
        cout << "This is the " << index << " time the loop has iterated" << endl;
    }
    string *address;
    address = &name;
    cout << address << endl;
    
//    cout << "How many digits of pi do you know?" << endl;
    
//    input is going to be a list of somesort that the user inputs
    
//    for (int digit = 1; index < 1000; digit++)
//    {
//        while (input.getchar(digit) = M_PI)
//        {
//
//        }
//    }
    
    int pi [5] = { 3, 1, 4, 1, 5 };
    double pii [1] = { 3.14159265358979 };
    string pie [6] { "three" "point" "one" "four" "one" "five"};
    for (int i = 1; i < 6; i++)
    {
        cout << "this is pi in integers" << pi [i] << endl;
    }
    cout << "this is pi to the fifteenth digit" << pii << endl;
    for (int i = 1; i < 7; i++)
    {
        cout << "this is pi in words" << pie [i] << endl;
    }
        
}
