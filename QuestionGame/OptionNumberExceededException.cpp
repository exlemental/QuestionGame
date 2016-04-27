//
//  OptionNumberExceededException.cpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#include "OptionNumberExceededException.hpp"

OptionNumberExceededException::OptionNumberExceededException(std::string userInfo)
: std::range_error(userInfo)
{

}