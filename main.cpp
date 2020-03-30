#include <iostream>
#include "Database.h"
#include <vector>


using namespace std;


// YOU MUST HAVE SORTED SEQUENCE BEFORE USING BINARY SEARCH

int binaryS(const int array[], int l, int r, int searchItem) {

  //  int array[] = {2, 3, 4, 10, 40}; -> size 6

  while (l <= r) {  // 0 <= 6

    int m = l + (r - 1) / 2;

    // Search item => 10

    // WE MOVING TO RIGTH SIDE AFTER FIRST ITERATION AND REMOVE LEFT HALF ELEMENTS
    // int array[] = {2, 3, 4, 10, 40}; -> size 6

    // m = 0 + (6 - 1) / 2 = 2
    // middle element => 4, element index = 2

    //if 4 == 10 false
    if (array[m] == searchItem) {
      return m;
    }

    // if 4 < 10 true
    if (array[m] < searchItem) {
      l = m + 1; // l = 2 + 1 = 3
    } else {
      r = m - 1;
    }
  }
  return -1;
}


int main() {

  int array[] = {2, 3, 4, 10, 40};

  int searchItem = 3;

  int length = sizeof(array) / sizeof(array[0]);

  int result = binaryS(array, 0, length - 1, searchItem);

  (result == -1) ?
  cout << "Element is not preset!"<<endl :
  cout << "Element is preset at index: "<< result << endl;





  Person *john = new Person("John",
                            "Jasinkio g. 15",
                            "Progamming, Working with excel",
                            18,
                            999945);

  Person *catherine = new Person("catherine",
                                 "Fabijoniskes",
                                 "Progamming C++",
                                 28,
                                 544464);
  Person *peter = new Person("Peter",
                             "Jasinkio g. 15",
                             "Progamming, Working with excel",
                             33,
                             4522244);
  Person *zoe = new Person("Zoe",
                           "SAltoniskes",
                           "Progamming JAVA",
                           25,
                           89742);
  Database database;

  database.addPerson(john);
  database.addPerson(catherine);
  database.addPerson(peter);
  database.addPerson(zoe);

//  Person *searchresult = database.findPersonByUniqueID(catherine->getId());
  //database.displayInBrowser(searchresult);


  Person* isUserExists = database.findPersonByIDBinarySearch(catherine->getId());

  if(isUserExists!= nullptr){
    database.displayInBrowser(isUserExists);
  }









  return 0;
}
