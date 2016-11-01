//
//  Lookup.hpp
//  TaxonomyHashtable_2
//
//  Created by Maleeha Ahmed on 10/31/16.
//  Copyright © 2016 Maleeha Ahmed. All rights reserved.
//

#ifndef Lookup_hpp
#define Lookup_hpp

#include <stdio.h>
#include <map>
#include <iostream>
#include <cstring>
#include <fstream>
#include <cassert>
using namespace std;



#endif /* Lookup_hpp */


//linked list to store the path
typedef struct Pathlist
{
    int ParentID;
    string Name;
    string Rank;
    struct Pathlist *next;
}list;

void storePath(int key, list **head);
void printPath(list *head);
void searchTable(int key, list **head);
void findPath(list **head);
