//--------------------------------------------------------------//
// Norsk Datateknikk AS 2021                                    //
//--------------------------------------------------------------//
// This file is subject to the terms and conditions defined in  //
// file 'LICENSE', which is part of this source code package.   //
//--------------------------------------------------------------//

#pragma once    // only include file once.    

#include <iostream>
#include <vector>

/**
 * Class for describing a house.
 */
class ND_house
{
    public:
        // Public items can be called form anywhere. Similar to struct items. 
        struct person
        {
            std::string name;
            uint        age;
        };

        person get_owner();

    protected:
        // Protected items are private in derived classes. 
        person      owner;
        
};

/**
 * Class for describing a home.
 * Inherits from the ND_house class.
 */
class ND_home : public ND_house
{
    public:
        ND_home( std::string name, uint age );
        virtual ~ND_home();

        float get_rent_per_resident();

    private:
        // Private items can only be accessed form class methods of this class.
        uint rent = 12000;          // Value is set during object construction.
        std::vector<person> residents;  // A vector has variable lenght.
        std::string     address;

        // Utility method
        uint get_numb_of_residents(); // Private method can only be called from other mehtods in this class.
};
