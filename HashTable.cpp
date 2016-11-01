//
//  HashTable.cpp
//  TaxonomyHashtable_2
//
//  Created by Maleeha Ahmed on 10/31/16.
//  Copyright © 2016 Maleeha Ahmed. All rights reserved.
//

#include "HashTable.hpp"

    
void makeMap( string filename)
{
    string line;
    int ID;
    int ParentID;
    char rank[100];
    char name[100];
    
    ifstream ifs(filename.c_str());
    while (ifs.good())
    {
        getline(ifs, line);
        
        if (line.empty())
            break;
        
        sscanf(line.c_str(), "%d\t%d\t%s\t%s",&ID, &ParentID,rank, name);
        taxmap[ID].parentID =ParentID;
        taxmap[ID].Name =name;
        taxmap[ID].Rank = rank;
    }
    
    
    
    
    
    
    
    
}

