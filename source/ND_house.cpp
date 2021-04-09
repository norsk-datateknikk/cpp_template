//--------------------------------------------------------------//
// Norsk Datateknikk AS 2021                                    //
//--------------------------------------------------------------//
// This file is subject to the terms and conditions defined in  //
// file 'LICENSE', which is part of this source code package.   //
//--------------------------------------------------------------//

#include "ND_house.hpp"


/**
 * Constructor.
 * @param name The name of the owner.
 * @param age The age of the owner.
 */
ND_house::ND_house( std::string name, uint age )
{
    owner.name = name;
    owner.age = age;
}

/**
 * @returns The owner.
 */
ND_house::person
ND_house::get_owner()
{
    return owner;
}


/**
 * Constructor.
 */
ND_home::ND_home()
{
    residents.push_back(owner);
}

/**
 * Destructor.
 */
ND_home::~ND_home()
{
    std::cout<<"I'm being destroyed\n";
}

/**
 * @returns Rent paid per person.
 */
float
ND_home::get_rent_per_resident()
{

}

/**
 * @returns Number f residents in home.
 */
uint 
ND_home::get_numb_of_residents()
{

}