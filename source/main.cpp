//--------------------------------------------------------------//
// Norsk Datateknikk AS 2021                                    //
//--------------------------------------------------------------//
// This file is subject to the terms and conditions defined in  //
// file 'LICENSE', which is part of this source code package.   //
//--------------------------------------------------------------//

#include "ND_house.hpp"

#include <iostream>

int main (int argc, char *argv[])
{
    ND_home home( "Erik", 26 ); // Create object, give arguments to constructor.
    auto rent = home.get_rent_per_resident();

    std::cout<<"Each resitent pays "<<std::to_string(rent)<<" NOK in rent.\n";

    return 0;
}