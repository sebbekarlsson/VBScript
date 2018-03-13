#ifndef INTERPRETER_TOOLS_H
#define INTERPRETER_TOOLS_H
#include <iostream>
#include <algorithm>
#include <ctype.h>


namespace InterpreterTools {
    bool is_variable(std::string argument);

    std::string unquote(std::string argument);
};

#endif