#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string str;
	public:
		Weapon(std::string str);
		~Weapon(void);
		const std::string &getType(void) const;
		void setType(std::string str);
};

# endif