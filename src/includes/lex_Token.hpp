#ifndef LEX_TOKEN_H
#define LEX_TOKEN_H
#include <iostream>
#include <string>
#include <vector>


class Token {
    public:
        std::string startname;
        std::string endname;
        std::vector<std::string> args;
    
        Token();

        virtual std::string execute() = 0;
};

#endif
