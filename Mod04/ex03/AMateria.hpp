#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"

class AMateria {
public:
	AMateria(std::string const& type);
	AMateria(const AMateria& toCopy);
	virtual ~AMateria();

	AMateria&	operator=(const AMateria& rhs);

	std::string const&	getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

protected:
	std::string	_type;
};	
#endif
