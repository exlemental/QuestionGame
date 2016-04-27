//
//  Human.cpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#include "Human.hpp"

Human::Human(std::string identifier,
             std::string firstName,
             std::string lastName)
: identifier(identifier), firstName(firstName), lastName(lastName)
{
    //  Empty implementation
}

Human::~Human()
{
    //  Empty implementation
}

std::string
Human::fullName() const noexcept
{
    return firstName + " " + lastName;
}