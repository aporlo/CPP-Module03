#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap    claptrap("Aporlo");

    claptrap.attack("Wow");
    claptrap.takeDamage(8);
    claptrap.beRepaired(17);
    claptrap.takeDamage(19);
    return 0;
}
