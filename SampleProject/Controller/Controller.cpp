//
//  Controller.cpp
//  SampleProject
//
//  Created by Brailow, Parker on 1/25/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "Controller.hpp"

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
}
