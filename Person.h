//
// Created by Marius on 3/28/2020.
//

#ifndef SEARCHINGTECHNIQUES_PERSON_H
#define SEARCHINGTECHNIQUES_PERSON_H
#include <iostream>

class Person {
private:
  std::string name;
  std::string address;
  std::string skills;
  int age;
  int id;
public:

  Person(const std::string &name, const std::string &address, const std::string &skills, int age, int id);

  const std::string &getName() const;

  int getId() const;

  const std::string &getAddress() const;

  const std::string &getSkills() const;

  int getAge() const;

};


#endif //SEARCHINGTECHNIQUES_PERSON_H
