#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string name): _name(name), _hit(10), _energy(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
    this->_initialEng =  this->_energy;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
    this->set_name(src.get_name());
    this->_attackDamage = src.get_attack_damage();
    this->_energy = src.get_energy_points();
    this->_hit = src.get_hitpoints();
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & ref)
{
    std::cout << "Assignement operator called" << std::endl;
    if (this != &ref)
    {
        this->set_name(ref.get_name());
        this->_hit = ref.get_hitpoints();
        this->_energy = ref.get_energy_points();
        this->_attackDamage = ref.get_attack_damage();
    }
    return (*this);
        
}

void    ClapTrap::attack( const std::string &target)
{
    this->_energy -= 1;
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
    this->_energy -= 1;
}

void    ClapTrap::set_name(std::string name)
{
    this->_name = name;
}

void    ClapTrap::set_hit(unsigned int hit)
{
    this->_hit = hit;
}

void    ClapTrap::set_energy(unsigned int energy)
{
    this->_energy =  energy;
}

void    ClapTrap::set_attack_damage(unsigned int attackDamage)
{
    this->_attackDamage = attackDamage;
}

std::string		ClapTrap::get_name( void ) const
{
    return(this->_name);
}

unsigned int	ClapTrap::get_hitpoints( void ) const
{
    return(this->_hit);
}

unsigned int	ClapTrap::get_energy_points( void ) const
{
    return(this->_energy);
}
		
unsigned int	ClapTrap::get_attack_damage( void ) const
{
    return(this->_attackDamage);
}