#pragma once
#include <iostream>
#include <string>

class File
{
public:
    File(std::string nam): name(nam){}
    std::string getName();
private:
    std::string name;
};
