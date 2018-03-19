#pragma once
#include <string>
#include "File.h"
class Dir
{
public:
    Dir(std::string nam);
    ~Dir();
    void operator += (Dir*);
    void operator += (File*);
    friend std::ostream& operator << (std::ostream& stream, const Dir& dir);
    Dir* get(std::string name);
    void print(std::ostream& stream, int spaces) const;
    
private:
    std::string name;
    Dir** dirArray;
    File** fileArray;
    int dirIndex;
    int fileIndex;
    int space;
};


std::ostream& operator << (std::ostream& stream, const Dir& dir);