#pragma once

#include "ASpell.hpp"

class Fireball: public ASpell {
	public:
		Fireball()
		{
			name = "Fireball";
			effects = "burnt tp a crisp";
		}

		Fireball(Fireball const &x) {	*this = x;	}
		~Fireball() {}

		Fireball	&operator=(Fireball const &x)
		{
			name = x.name;
			effects = x.effects;
			return *this;
		}

		ASpell *clone() const
		{
			return new Fireball();
		}
};