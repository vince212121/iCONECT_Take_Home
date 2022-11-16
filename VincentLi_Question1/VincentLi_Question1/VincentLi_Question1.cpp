/*
\file:      VincentLi_Question1.cpp
\author:    Vincent Li
\date:      11/15/2022
\purpose:   This is the main class
*/

#include <iostream>
#include "Oracle.h"
#include <vector>
#include <format>

int main()
{

    COracle *cOracle = new COracle();
    const char* szQuery = "SELECT OBJECT_ID, AUTHOR, TITLE FROM testing WHERE AUTHOR IS 'iconect\\london' OR OBJECT_ID >= 5;";
    const int objectIDIndex = 0;
    const int authorIndex = 1;
    const int titleIndex = 2;

    if (cOracle->Open(szQuery))
    {
        std::vector<std::string> data;
        data.push_back("OBJECT_ID, AUTHOR, TITLE");

        // Only push the data if there are fields
        if (cOracle->GetFieldCount() > 0)
        {
            while (!cOracle->IsEOF()) {
                // Push the data and move to the next record
                data.push_back(std::format("{}, {}, {}", cOracle->GetFieldName(objectIDIndex), cOracle->GetFieldName(authorIndex), cOracle->GetFieldName(titleIndex)));
                cOracle->MoveNext();
            };
        }
        else
        {
            std::cout << "No fields to display." << std::endl;
        }
    }
    else
    {
        std::cout << "Unable to execute query." << std::endl;
    }

    // Freeing memory and closing the connection
    delete cOracle;
}