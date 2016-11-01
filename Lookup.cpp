//
//  Lookup.cpp
//  TaxonomyHashtable_2

#include "Lookup.hpp"
#include "HashTable.hpp"

//------------------------------
void storePath(int key, list **head)
{
    list *temp = (list*)malloc(sizeof(list)); //create a new node of the list
    temp->ParentID = taxmap[key].parentID;
    
    temp->Rank = taxmap[key].Rank;
    temp->Name = taxmap[key].Name;
    
    if(head == NULL)//if list is empty
    {
        //set the head to the new node
        temp->next = *head;
        *head = temp;
        
        
    }
    else //add the new node to the front of the list
    {
        temp->next = *head;
        *head = temp;
    }
    
}

//------------------------------

void printPath(list *head)
{
    while(head!= NULL)
    {
        
        //printf("ID: %d Name: %s Rank: %s ",head->ParentID , head->Na.c_str()me, head->Rank);
        cout<<"ID:" <<head->ParentID <<" Name: "<<head->Name <<" Rank: "<< head->Rank<<endl<<endl;
        head = head->next;
    }
}

//------------------------------
void searchTable(int key, list **head)
{
    
    //set the first node in the list to be the one that the user entered
    list *temp = (list*)malloc(sizeof(list));
    temp->ParentID = key;
    temp->Name = taxmap[key].Name;
    temp->Rank = taxmap[key].Rank;
    *head = temp;
    
    while(taxmap[key].parentID != key) //while the parent id and the id is not the same
    {
        storePath(key, head); //store the path of each node visited in the linked list
        key = taxmap[key].parentID; //go to the parent node
        
    }
    
}

//------------------------------
void findPath(list **head)
{
    int userID=0;
    //prompt the user to enter id to find from the hash table
    cout <<"Enter ID to find or press -1 to quit: ";
    cin >>userID;
    cout<< endl<<endl;
    while(userID != -1)
    {
        if(taxmap[userID].parentID != 0) //if the id is valid
        {
            searchTable(userID, head);//search the hash table
            
            printPath(*head);
        }
        else
        {
            while(taxmap[userID].parentID == 0)
            {
                
                cout<< "invalid id, please try again: ";
                cin>>userID;
                cout<< endl<<endl;
                if(taxmap[userID].parentID!=0)
                {
                    searchTable(userID, head);
                    printPath(*head);
                }
            }
        }
        cout <<"Enter ID to find or press -1 to quit: ";
        cin >>userID;
        cout<< endl<<endl;
    }
}


