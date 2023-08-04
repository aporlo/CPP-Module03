#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string name): _name(name), _hit(10), _energy(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
    this->_initialEng =  this->_energy;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
   this->_attackDamage = src._attackDamage;
   this->_energy = src._energy;
   this->_hit = src._hit;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & ref)
{
    std::cout << "Assignement operator called" << std::endl;
    if (this != &ref)
        *this = ref;
    return (*this);
}

void    ClapTrap::attack( const std::string &target)
{
    this->_energy -=1;
    if (this->_energy <= 0)
    {
        std::cout << "ClapTrap" << this->_name << "has no energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit -= amount;
    if (this->_hit < 0)
		this->_hit = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_hit += amount;
    if (this->_hit > this->_initialEng)
        this->_hit =  this->_initialEng;
    this->_energy -=1;
}
