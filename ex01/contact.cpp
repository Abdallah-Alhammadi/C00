#include "contact.hpp"

contact::contact(void)
{
}

contact::~contact(void)
{
}

std::string	contact::get_fname(void) const
{
	return (this->_fname);
}

std::string	contact::get_lname(void) const
{
	return (this->_lname);
}

std::string	contact::get_nick(void) const
{
	return (this->_nick);
}

std::string	contact::get_phone_num(void) const
{
	return (this->_phone_num);
}

std::string	contact::get_secret(void) const
{
	return (this->_secret);
}

void	contact::set_fname(std::string str)
{
	this->_fname = str;
}

void	contact::set_lname(std::string str)
{
	this->_lname = str;
}

void	contact::set_nick(std::string str)
{
	this->_nick = str;
}

void	contact::set_phone_num(std::string str)
{
	this->_phone_num = str;
}

void	contact::set_secret(std::string str)
{
	this->_secret = str;
}
