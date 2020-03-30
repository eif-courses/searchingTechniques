//
// Created by Marius on 3/28/2020.
//

#ifndef SEARCHINGTECHNIQUES_DATABASE_H
#define SEARCHINGTECHNIQUES_DATABASE_H

#include <vector>
#include "Person.h"

class Database {
private:
  std::vector<Person*> persons;
public:
  void addPerson(Person *p);
  Person* findPersonByUniqueID(const long &id) const;
  static bool compareByPersonID(Person *p1, Person *p2);
  Person* findPersonByIDBinarySearch(int searchKey);
  void displayInBrowser(Person *p) const;

};


#endif //SEARCHINGTECHNIQUES_DATABASE_H
