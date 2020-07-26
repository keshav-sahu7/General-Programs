/*
 * PasswordValidator.h
 *
 *  Created on: 09-Sep-2019
 *      Author: admin
 */

#ifndef KS_PASSWORDVALIDATOR_H_
#define KS_PASSWORDVALIDATOR_H_

#include <iostream>

namespace KS {
class Password{
private:
	unsigned short min,max;
public:
	Password();

	Password(short min_,short max_);

	Password(const Password &p);
	bool validate(std::string pwd);
	void setMinLength(short ml);
	void setMaxLength(short Ml);
	void setConstantLength(short cl);
};
} /* namespace KS */

#endif /* PASSWORDVALIDATOR_H_ */
