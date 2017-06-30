#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <sstream>
class Entry
{
public:
    Entry(){}
    ~Entry(){}

    void add();
    void printFileList(std::string prefix);
    std::string getName();
    int getSize();
    std::string getInfo();

protected:
    void printFileList();

};

inline std::string Entry::getInfo()
{
    std::stringstream ss;
    ss << getName() << "(" << getSize() << ")";
    return ss.str();
}

inline void Entry::printFileList()
{
    printFileList("");
}

#endif
