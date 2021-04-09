//--------------------------------------------------------------//
// Norsk Datateknikk AS 2021                                    //
//--------------------------------------------------------------//
// This file is subject to the terms and conditions defined in  //
// file 'LICENSE', which is part of this source code package.   //
//--------------------------------------------------------------//

#include "ND_house.hpp"


/**
 * @returns The house owner.
 */
ND_house::person
ND_house::get_owner()
{
    return owner;
}


/**
 * Constructor.
 * @param name The name of the owner.
 * @param age The age of the owner.
 */
ND_home::ND_home( std::string name, uint age )
{
    owner.name = name;
    owner.age = age;

    residents.push_back(owner);
}

/**
 * Destructor.
 */
ND_home::~ND_home()
{
    std::cout<<"I'm being destroyed!\n";
}

/**
 * @returns Rent paid per person.
 */
float
ND_home::get_rent_per_resident()
{
    return (float) rent/get_numb_of_residents();
}

/**
 * @returns Number f residents in home.
 */
uint 
ND_home::get_numb_of_residents()
{
    return (uint) residents.size();
}