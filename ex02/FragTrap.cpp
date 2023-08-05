#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name ): ClapTrap( name )
{
    this->_attackDamage = 30;
    this->_energy = 100;
    this->_hit = 100;
    this->_initialEng =  this->_energy;
    std::cout << "FragTrap" << this->_name << " is created!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap( src )
{
   this->_attackDamage = src._attackDamage;
   this->_energy = src._energy;
   this->_hit = src._hit;
}

FragTrap & FragTrap::operator=( FragTrap const & ref)
{
    std::cout << "FragTrap: Assignement operator called" << std::endl;
    if (this != &ref)
        *this = ref;
    return (*this);
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap is destroyed" << std::endl;
}

void    FragTrap::attack( const std::string &target)
{
    std::string		name = this->_name;
    this->_energy -= 1;
    if (this->_energy <= 0)
    {
        std::cout << "FragTrap" << this->_name << "has no energy" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap give a high five" << std::endl;
}
