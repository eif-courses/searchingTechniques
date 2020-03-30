//
// Created by Marius on 3/28/2020.
//

#include "Person.h"


const std::string &Person::getName() const {
  return name;
}

int Person::getId() const {
  return id;
}

Person::Person(const std::string &name, const std::string &address, const std::string &skills, int age, int id) : name(
    name), address(address), skills(skills), age(age), id(id) {}

const std::string &Person::getAddress() const {
  return address;
}

const std::string &Person::getSkills() const {
  return skills;
}

int Person::getAge() const {
  return age;
}
