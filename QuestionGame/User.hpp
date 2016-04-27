//
//  User.hpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#ifndef User_hpp
#define User_hpp

#include <iostream>

#include "Human.hpp"

class User : public Human {
public:
    User();
    
    std::string username;
    std::string password;
    
    std::string email;
    bool verified = false;
};

#endif /* User_hpp */
