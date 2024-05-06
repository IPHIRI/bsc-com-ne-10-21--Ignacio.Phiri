#pragma once 
#include "person.h"

Person::Person():mWeight(0), mAge(0){ }
Person::Person(float newweight): mWeight(newweight), mAge(0){ }

Person::~Person(){}

float Person::operator+(const Person& otherPerson){
    return mWeight + otherPerson.mWeight;
}

