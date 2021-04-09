//--------------------------------------------------------------//
// Norsk Datateknikk AS 2021                                    //
//--------------------------------------------------------------//
// This file is subject to the terms and conditions defined in  //
// file 'LICENSE', which is part of this source code package.   //
//--------------------------------------------------------------//

#include <iostream>
#include <vector>

/**
 * Class for describing a house.
 */
class ND_house
{
    public:
        ND_house( std::string owner, uint age );
        virtual ~ND_house();
        
        struct person
        {
            std::string name;
            uint        age;
        };

        person get_owner();

    protected:
        person      owner;
        
};


/**
 * Class for describing a home.
 */
class ND_home : public ND_house
{
    public:
        ND_home();
        virtual ~ND_home();

        float get_rent_per_resident();

    private:

        uint rent = 12000;          // Value is set during object construction.

        std::vector<person> residents;    
        std::string     address;
        uint get_numb_of_residents();
};
