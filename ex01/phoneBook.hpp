#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "contact.hpp"
#include "phoneBook_table.hpp"

class	phoneBook
{
	private:
		contact	_contacts[8];
		int		_index;
	public:
		phoneBook(void);
		~phoneBook(void);
		void	add(void);
		void	search(void);
		void	print(contact contact);
        
		contact	get_contact(int index);
};

#endif
