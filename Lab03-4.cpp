/*
  ex5_36.cpp
  Exercise 36, Chapter 5, Ford/Topp "Data Structures With C++ using STL"
  For Cosc-220  Lab
  Thomas Anastasio
  Created: November 5, 2002
  Current: November 5, 2002
*/
//code modified by Mark Schweitzer
/********************  as provided on K drive *****************/
#include <iostream>
using namespace std;
#include "d_rect.h"
#include "ex5_36Aux.h"

rectangle ** getRoomArray(){
cout << "Input number of rooms" << endl;
int numRooms;
cin >> numRooms;
rectangle **Ptarr = new rectangle*[numRooms];
for (int i = 0; i< numRooms; i++){
*(Ptarr+i) = new rectangle();
}
return Ptarr;
}

void getRoomData(rectangle ** rooms){
    int i = 0;
    double inpLen;
    double inpWid;
    while(rooms[i] != nullptr){
        cout << "Input length and width for room " << i << endl;
        cin >> inpLen;
        cin >> inpWid;
        rooms[i]->setSides(inpLen,inpWid);
        i++;
    }
}
double getTotalArea(rectangle ** rooms){
int i = 0;
double Areas = 0;
while(rooms[i] != nullptr){
    Areas += rooms[i]->area();
    i++;
}
return Areas;
}
rectangle *largestPerimeter(rectangle ** rooms){
int i = 0;
rectangle *rec = rooms[0];
while(rooms[i] != nullptr){
    if(rec->perimeter() < rooms[i]->perimeter()){
        rec = rooms[i];
    }
    i++;
    
}
return rec;
}
void reportOnLargest(rectangle  *largeRoom){
cout << "The area of the room is " << largeRoom->area() << endl;
cout << "The perimiter of the room is " << largeRoom->perimeter() << endl;
cout << "The length is " << largeRoom->getLength() << endl;
cout << "The Width is " << largeRoom->getWidth() << endl;
}
void reportOnTotalArea(rectangle ** rooms){
int i = 0;
double Areas = 0;
while(rooms[i] != nullptr){
    Areas += rooms[i]->area();
    i++;
}
cout << "The total area of the arrays is " << Areas << endl;
}
int main()
{
  
    rectangle ** rooms = getRoomArray();

  getRoomData(rooms);

  reportOnTotalArea(rooms);
  
  rectangle *largePerim = largestPerimeter(rooms);
  
  reportOnLargest(largePerim);


  return 0;
}
