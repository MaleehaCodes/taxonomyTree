//
//  HashTable.hpp
//  TaxonomyHashtable_2
//
//  Created by Maleeha Ahmed on 10/31/16.
//  Copyright © 2016 Maleeha Ahmed. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>

#include <stdio.h>
#include <map>
#include <iostream>
#include <cstring>
#include <fstream>
#include <cassert>
using namespace std;


#endif /* HashTable_hpp */

typedef struct TaxonomyInfo // struct to store information for each organism
{
    
    int ID;
    int parentID;
    string Rank; //holds the rank as array of characters
    string Name; //holds teh name as array of characters
    
}taxinfo;

extern std::map<int, taxinfo> taxmap;
void makeMap( string filename);

