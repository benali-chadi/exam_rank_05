#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string 			name;
		std::string 			title;
		SpellBook				spBook;
		
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
			spBook.learnSpell(spell);
		}

		void				forgetSpell(std::string name)
		{
			spBook.forgetSpell(name);
		}

		void				launchSpell(std::string name, ATarget &target)
		{
			spBook.createSpell(name)->launch(target);
		}
};