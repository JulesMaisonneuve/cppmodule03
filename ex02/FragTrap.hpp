#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(std::string name, int ad);
		FragTrap &operator=(const FragTrap &other);
		FragTrap(const FragTrap &s);
		void highFivesGuys(void);
		~FragTrap(void);
};

#endif
