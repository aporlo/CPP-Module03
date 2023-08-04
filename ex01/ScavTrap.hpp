#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap:  public ClapTrap
{

    private:
        ScavTrap( void );

    public:
        ScavTrap( const std::string name );
        ScavTrap( const ScavTrap &src );
        ~ScavTrap(void);

        ScavTrap	&operator=( const ScavTrap &other );
        void    attack( const std::string& target);
        void    guardGate( void );
};

#endif