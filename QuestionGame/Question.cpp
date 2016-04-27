//
//  Question.cpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#include "Question.hpp"

Question::Question(std::string identifier,
                   std::string name,
                   std::vector<std::string> options,
                   unsigned int answer)
: identifier(identifier), name(name), options(options), answer(answer)
{
    //  Propagate error if answer number exceeds number of questions provided (semantic analysis).
    if (answer >= options.size()) {
        throw OptionNumberExceededException("Invalid option number.");
    }
}