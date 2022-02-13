#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh: ASpell {
	public:
		Fwoosh()
		{
			name = "Fwoosh";
			effects = "fwooshed";
		}

		Fwoosh(Fwoosh const &x)	{	*this = x;	}
		~Fwoosh() {}

		Fwoosh	&operator=(Fwoosh const &x)
		{
			name = x.name;
			effects = x.effects;
		}

		ASpell	*clone() const
		{
			return new Fwoosh();
		}
};

#endif