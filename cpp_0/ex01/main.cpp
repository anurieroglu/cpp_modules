#include "Phonebook.hpp"

void    start(PhoneBook &obj)
{
    string cmd;

    cout << "Please Command: \n1-ADD\n2-SEARCH\n3-EXIT" << endl;
    getline(cin, cmd);
    if (cmd == "ADD")
        obj.add_contact();
    else if (cmd == "SEARCH")
        obj.search_contact();
    else if (cmd == "EXIT")
        exit(1);
    else
        cout << "Wrong Command!" << endl;
}

int main()
{
    PhoneBook obj;

	cout << "*/ WELCOME TO THE PHONEBOOK-V1.2 \\*\n" << endl;
    while (1)
        start(obj);
    return (0);
}