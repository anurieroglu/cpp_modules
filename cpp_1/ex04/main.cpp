#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string line;
        std::string filename = av[1];
        std::string file = filename + ".replace";
        std::ofstream yourfile;
        std::ifstream myfile;

        yourfile.open(file.c_str());
        myfile.open(av[1]);
        if (!myfile.good() || !yourfile.good())
            return 1;
        while (getline(myfile, line))
        {
            size_t pos = line.find(av[2]);
            while (pos != std::string::npos)
            {
                line.erase(pos, std::string(av[2]).length());
                line.insert(pos, av[3]);
                pos = line.find(av[2]);
            }
            yourfile << line << std::endl;
        }
        myfile.close();
        yourfile.close();
    }
}