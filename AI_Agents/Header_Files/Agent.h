#ifndef AGENTS_H
#define AGENTS_H
#include <string>

namespace AI_Agents {
    struct Agent {
        std::string name;
        std::string personality;
        int action;
        Agent(const std::string& name, const std::string& personality);
        ~Agent() = default;
        virtual void setAction(const int& intentValue) = 0;
        
    };
}


#endif
