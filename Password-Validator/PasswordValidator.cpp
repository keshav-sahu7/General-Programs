/*
 * PasswordValidator.cpp
 *
 *  Created on: 09-Sep-2019
 *      Author: admin
 */

#include "..\include\PasswordValidator.h"

namespace KS {

Password::Password(){
	min = 6;
	max = 10;
}

Password::Password(short min_,short max_){
		min = min_;
		max = max_;
}
Password::Password(const Password &p){
	min = p.min;
	max = p.max;
}

bool Password::validate(std::string pwd)
{
	if(pwd.empty())
		return false;
	unsigned int length = pwd.length();
	if(length > max)
	{
		std::cout<<"Password Too Long"<<std::endl;
			return false;
	}
	else if(length < min){
		std::cout<<"Password Too Short"<<std::endl;
			return false;
	}

	int c;
	bool ur = false;
	bool lr = false;
	bool sc = false;
	bool nm = false;

	for(unsigned int i = 0; i < length; i++)
	{
		c = pwd.at(i);
		if(std::isdigit(c))
			nm = true;
		if(std::islower(c))
			lr = true;
		if(std::isupper(c))
			ur = true;
		if(std::ispunct(c))
			sc = true;
	}

	if(not lr)
		std::cout<<"Missing Lower Case Letter"<<std::endl;
	if(not ur)
		std::cout<<"Missing Upper Case Letter"<<std::endl;
	if(not sc)
		std::cout<<"Missing Special Character"<<std::endl;
	if(not nm)
		std::cout<<"Missing Numerical Character"<<std::endl;

	if(lr and ur and sc and nm)
		return true;
	else
		return false;
}

void Password::setMinLength(short ml)
{
	min = ml;
}

void Password::setMaxLength(short Ml){
	max = Ml;
}

void Password::setConstantLength(short cl){
	min = max = cl;
}

} /* namespace KS */
