//
//  Question.hpp
//  QuestionGame
//
//  Created by Kerem ER on 27.04.2016.
//  Copyright © 2016 KeremEr. All rights reserved.
//

#ifndef Question_hpp
#define Question_hpp

#include <iostream>
#include <vector>

#include "OptionNumberExceededException.hpp"

class Question {
public:
    struct AnswerCount {
        unsigned int trueCount = 0;
        unsigned int falseCount = 0;
        unsigned int missedCount = 0;
    };
    
    Question(std::string identifier, std::string name, std::vector<std::string> options, unsigned int answer);
    
    std::string identifier;
    
    std::string name;
    std::vector<std::string> options;
    unsigned int answer;
    AnswerCount stats;
    
    unsigned int viewCount() const noexcept;
    float correctness() const noexcept;
};

#endif /* Question_hpp */
