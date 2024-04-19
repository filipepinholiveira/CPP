
#include "Contact.hpp"

Contact::Contact ()
{
    //std::cout << "Contact Constructor called" << std::endl;
    return;
}

Contact::~Contact()
{
    //std::cout << "Contact Destructor called" << std::endl;
    return;
}

PhoneBook* Contact::getList()
{ 
    return List; 
}

// void Contact::setList(PhoneBook newList, int index, int choice)
// {
//             List[in] = newList[index].setContact(choice);
// }

