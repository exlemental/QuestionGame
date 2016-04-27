//
//  Human.hpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#ifndef Human_hpp
#define Human_hpp

#include <iostream>

class Human {
public:
    Human(std::string identifier, std::string firstName, std::string lastName);
    virtual ~Human() = 0;
    
    std::string identifier;
    
    std::string firstName;
    std::string lastName;
    
    std::string fullName() const noexcept;
};

#endif /* Human_hpp */
