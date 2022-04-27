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
		void highFivesGuys(void);
		~FragTrap(void);
};

#endif
