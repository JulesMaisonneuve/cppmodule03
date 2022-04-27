#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		void guardGate(void);
		void attack(const std::string& target);
		~ScavTrap(void);
};

#endif
