#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
	private:
		std::string 			name;
		std::string 			title;
		std::vector<ASpell*>	spells;
		
		Warlock();
		Warlock(Warlock const &x);
		Warlock &operator=(Warlock const &x);

	public:
		Warlock(std::string name, std::string title): name(name), title(title)
		{	std::cout << name << ": This looks like another boring day." << std::endl;	}		
		
		~Warlock()
		{	std::cout << name << ": My job here is done!" << std::endl;	}

		std::string const &getName() const {	return name;	}
		
		std::string const &getTitle() const {	return title;	}
		void				setTitle(std::string const &str) {	title = str;	}

		void				introduce() const
		{	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;	}

		void				learnSpell(ASpell *spell)
		{
			if (spell)
			{
				std::vector<ASpell*>::iterator it = spells.begin();
			
				for (; it != spells.end(); it++)
					if ((*it)->getName() == name)
						return ;

				spells.push_back(spell);
			}
		}

		void				forgetSpell(std::string name)
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

		void				launchSpell(std::string name, ATarget &target)
		{
			std::vector<ASpell*>::iterator it = spells.begin();
			
			for (; it != spells.end(); it++)
			{
				if ((*it)->getName() == name)
				{
					(*it)->launch(target);
					return ;
				}
			}
		}
};