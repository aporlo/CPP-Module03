#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap    aporlo = ClapTrap("Aporlo");
    ScavTrap    meji = ScavTrap("Meji");

    aporlo.attack("Hi");
    meji.attack("Hello");
    meji.guardGate();
    
}