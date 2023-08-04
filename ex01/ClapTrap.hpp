#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap( const std::string name );
        ClapTrap( const ClapTrap &src );
        ~ClapTrap(void);

        ClapTrap    &operator=( const ClapTrap &other );

        // Setters
		void			set_name(std::string name);
		void			set_hit(unsigned int hit);
		void			set_energy(unsigned int energy);
		void			set_attack_damage(unsigned int attackDamage);

		// Getters
		std::string		get_name( void ) const;
		unsigned int	get_hitpoints( void ) const;
		unsigned int	get_energy_points( void ) const;
		unsigned int	get_attack_damage( void ) const;


        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:
        std::string     _name;
        int             _hit;
        int             _energy;
        int             _initialEng;
        int             _attackDamage;

        
};

#endif