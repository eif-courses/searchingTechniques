//
// Created by Marius on 3/28/2020.
//

#include "Database.h"
#include <windows.h>
#include <fstream>
#include <algorithm>

void Database::addPerson(Person *p) {
  persons.push_back(p);
}

Person *Database::findPersonByUniqueID(const long &id) const {
  for (Person *p: persons) {
    if (p->getId() == id) {
      return p;
    }
  }
  return nullptr;
}

void Database::displayInBrowser(Person *p) const {
  std::ofstream output;
  output.open("index.html");
  if (p != nullptr) {
    output << "<body style=background:black;>\n";
    output << "<ol>\n";

    output << "<li><strong style='color:lime; font-size:30pt'>id: " << p->getId() << "</strong></li>\n";
    output << "<li><strong style='color:lime; font-size:30pt'>age: " << p->getAge() << "</strong></li>\n";
    output << "<li><strong style='color:lime; font-size:30pt'>name: " << p->getName() << "</strong></li>\n";
    output << "<li><strong style='color:lime; font-size:30pt'>address: " << p->getAddress() << "</strong></li>\n";
    output << "<li><strong style='color:lime; font-size:30pt'>skills: " << p->getSkills() << "</strong></li>\n";

    output << "</ol>\n";
    output << "</body>\n";
    //cout << "id: "<<result->getId() << ", name: " <<result->getName()<<endl;
  }
  output.close();
  LPCTSTR helpFile = "index.html";
  ShellExecute(NULL, "open", helpFile, NULL, NULL, SW_SHOWNORMAL);
}



//bool isFaster(const Result* a, const Result* b)
//{
//  const Time aTime = a->getTime();
//  const Time bTime = b->getTime();
//
//  if (aTime.getHours() < bTime.getHours())
//    return true;
//
//  if (aTime.getMinutes() < bTime.getMinutes())
//    return true;
//
//  return aTime.getSeconds() < bTime.getSeconds();
//}
//
//void Race::sortResults() {
//  sort(results.begin(), results.end(), isFaster);
//}


Person *Database::findPersonByIDBinarySearch(int searchKey) {

  int left = 0;
   int right = persons.size() - 1;
  int middle = 0;
  std::cout << right;

  std::sort(persons.begin(), persons.end(), compareByPersonID);

  while (left <= right) {
    middle = left + (right - 1) / 2;
    if (persons[middle]->getId() == searchKey) {
      return persons[middle];
    }
    if (persons[middle]->getId() < searchKey) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return nullptr;
}

bool Database::compareByPersonID(Person *p1, Person *p2) {
  return p1->getId() < p2->getId();
}








