#include "FragTrap.hpp"

int main( void )
{
    ClapTrap    aporlo = ClapTrap("Aporlo");
    FragTrap    moji = FragTrap("Moji");

    aporlo.attack("Hi");
    moji.attack("Hello");
    moji.takeDamage(30);
    moji.highFivesGuys();
    return 0;
}