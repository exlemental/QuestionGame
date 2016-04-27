//
//  OptionNumberExceededException.hpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#ifndef OptionNumberExceededException_hpp
#define OptionNumberExceededException_hpp

#include <iostream>

class OptionNumberExceededException: public std::range_error {
public:
    OptionNumberExceededException(std::string userInfo);
};

#endif /* OptionNumberExceededException_hpp */
