#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap:  public ClapTrap
{
    public:
        ScavTrap( const std::string name );
        ~ScavTrap(void);
        ScavTrap( ScavTrap const & src);

        ScavTrap    &operator=( const ScavTrap &ref );

        void    attack( const std::string& target);
        void    guardGate( void );
};

#endif