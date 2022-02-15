#pragma once

#include <iostream>
#include <vector>

#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

class SpellBook {
	private:
		std::vector<ASpell*>	spells;

		SpellBook(SpellBook const &x);
		SpellBook	&operator=(SpellBook const &x);

	public:
		SpellBook() {}
		~SpellBook() {}

		void	learnSpell(ASpell *spell)
		{
			if (spell)
			{
				std::vector<ASpell*>::iterator it = spells.begin();
			
				for (; it != spells.end(); it++)
					if ((*it)->getName() == spell->getName())
						return ;

				spells.push_back(spell);
			}
		}

		void	forgetSpell(std::string const &name)
		{
			std::vector<ASpell*>::iterator it = spells.begin();
			
			for (; it != spells.end(); it++)
			{
				if ((*it)->getName() == name)
				{
					spells.erase(it);
					return ;
				}
			}
		}

		ASpell	*createSpell(std::string const &name)
		{
			std::vector<ASpell*>::iterator it = spells.begin();

			for (; it != spells.end(); it++)
				if ((*it)->getName() == name)
					return *it;
			return NULL;
		}
};