#include "Dir.h"
Dir::Dir(std::string nam): name(nam)
{
    dirArray = new Dir*[20];
    fileArray = new File*[20];
    dirIndex = 0;
    space = 0;
    fileIndex = 0;
}

Dir::~Dir()
{
    std::cout << "Deleting Dir: " << name << std::endl;
    for (int i = 0; i < dirIndex; i++)
    {  
        std::cout << "About to delete " << dirArray[i]->name << std::endl;
        delete dirArray[i];
    }
    for (int i = 0; i < fileIndex; i++)
    {
        std::cout << "About to delete " << fileArray[i]->getName() << std::endl;        
        delete fileArray[i];
    }
    delete [] dirArray;
    delete [] fileArray;
}

void Dir::operator += (Dir* dir)
{
    dirArray[dirIndex] = dir;
    dirIndex++;
}
void Dir::operator += (File* file)
{
    fileArray[fileIndex] = file;
    fileIndex++;
}

Dir* Dir::get(std::string value)
{
    for (int i = 0; i < dirIndex; i++)
    {
        if (value != dirArray[i]->name)
        {
            dirArray[i]->get(value);
        }
        else
        {
            return dirArray[i];
        }
    }
    
}

std::ostream& operator << (std::ostream& stream, const Dir& dir)
{
    dir.print(stream, 0);
    return stream;
}

void Dir::print(std::ostream& stream, int spaces) const
{
    for (int i = 0; i < spaces; i++)
    {
        stream << "  ";
    }

    stream << name << std::endl;
    spaces++;
    for (int i = 0; i < fileIndex; i++)
    {
        for (int i = 0; i < spaces; i++)
        {
            stream << "  ";
        }
        stream << (this->fileArray[i])->getName() << std::endl;
    }

    for (int i = 0; i < dirIndex; i++)
    {
        dirArray[i]->print(stream, spaces);
    }
}