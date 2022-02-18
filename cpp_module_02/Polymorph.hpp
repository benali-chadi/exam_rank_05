#pragma once

#include "ASpell.hpp"

class Polymorph: public ASpell {
	public:
		Polymorph()
		{
			name = "Polymorph";
			effects = "turned into a critter";
		}

		Polymorph(Polymorph const &x) {	*this = x;	}
		~Polymorph() {}

		Polymorph	&operator=(Polymorph const &x)
		{
			name = x.name;
			effects = x.effects;

			return *this;
		}

		ASpell		*clone() const
		{
			return new Polymorph();
		}

};