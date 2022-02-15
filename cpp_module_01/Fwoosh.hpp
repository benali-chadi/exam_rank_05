#pragma once

#include "ASpell.hpp"

class Fwoosh: public ASpell {
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
			return *this;
		}

		ASpell	*clone() const
		{
			return new Fwoosh();
		}
};