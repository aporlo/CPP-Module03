#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name ): ClapTrap( name )
{
    this->_attackDamage = 20;
    this->_energy = 50;
    this->_hit = 100;
    this->_initialEng =  this->_energy;
    std::cout << "ScavTrap " << this->_name << " is created!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src): ClapTrap(src.get_name())
{
   this->_attackDamage = src.get_attack_damage();
   this->_energy = src.get_energy_points();
   this->_hit = src.get_hitpoints();
}

ScavTrap & ScavTrap::operator=( ScavTrap const & ref)
{
    std::cout << "ScavTrav: Assignement operator called" << std::endl;
    if (this != &ref)
    {
        this->_name = ref.get_name();
        this->_hit = ref.get_hitpoints();
        this->_energy = ref.get_energy_points();
        this->_attackDamage = ref.get_attack_damage();
    }
    return (*this);
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap is destroyed" << std::endl;
}

void    ScavTrap::attack( const std::string &target)
{
    std::string		name = this->_name;
    this->_energy -= 1;
    if (this->_energy <= 0)
    {
        std::cout << "ScavTrap" << name << "has no energy" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
