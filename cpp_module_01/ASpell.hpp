#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;
	
	public:
		ASpell();
		ASpell(ASpell const &x);
		ASpell(std::string name, std::string effects): name(name), effects(effects) {}

		ASpell &operator=(ASpell const &x);

		virtual ~ASpell();

		std::string const &getName() const {	return name;	}
		std::string const &getEffects() const {	return effects;	}

		virtual ASpell *clone() const = 0;

		void	launch(ATarget const &target) {	target.getHitBySpell(*this);	}
};

#endif