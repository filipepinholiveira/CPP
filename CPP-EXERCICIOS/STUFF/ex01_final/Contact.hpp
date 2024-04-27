
#ifndef CONTACT_H
# define CONTACT_H

#include "Phonebook.hpp"

class   Contact
{
    private:

        std::string _name;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:

        Contact ();
        ~Contact();

        void    setContact(int &choice);
    
        void    getContact(int index);

        void    showInfo();
};


#endif