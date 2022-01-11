
#include "StdAfx.h"
#include <iostream>
#include "List.h"

using namespace std;

List::List(void)
{size = 0;}


List::~List(void)
{
}

bool List::IsEmpty () { return size==0;}
bool List::IsFull () {return (size == MaxSize); }

void List::Insert (DataType e)
{
 if (!(IsFull()))
 {    Item[size] = e;
      size++;
 }
}


/* ordinary function - not a member function */
void Swap (DataType& x, DataType& y)
{                                
  DataType Temp;
  Temp = x;
  x = y;
  y =Temp;
}                                  

void List::Delete (DataType e)
{ 
 int index = 0;    
if  (!(IsEmpty()))
  {
    while ((index  < size) && (Item[index] != e) )
       index++;
    if (Item[index] == e)
    {  
     Swap (Item[index], Item[size-1]);
     size--;
    }
  }
}


void List::ShowData ()
{
 for (int index = 0; index < size; index++)
    cout << Item[index] << "   ";
    cout << endl;
	
}

