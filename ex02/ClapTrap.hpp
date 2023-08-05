#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

    protected:
        std::string     _name;
        int             _hit;
        int             _energy;
        int             _initialEng;
        int             _attackDamage;

    public:
        ClapTrap( const std::string name );
        ClapTrap( const ClapTrap &src );
        ~ClapTrap(void);

        ClapTrap    &operator=( const ClapTrap &ref );

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif