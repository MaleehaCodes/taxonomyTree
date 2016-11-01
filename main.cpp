/*
#include <stdio.h>
#include <map>
#include <iostream>
#include <cstring>
#include <fstream>
#include <cassert>
 */
#include "Lookup.hpp"
#include "HashTable.hpp"
//using namespace std;

std::map<int, taxinfo> taxmap;





int main(int argc, const char * argv[])
{
    
    list *head=NULL;
  
    makeMap("/Users/maleehaahmed/Desktop/Research/cfinal");
    findPath(&head);
   
    
    return 0;
    
}
