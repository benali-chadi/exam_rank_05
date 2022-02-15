#pragma once

#include <iostream>
#include "ASpell.hpp"

class ATarget {
	protected:
		std::string type;
	
	public:
		ATarget() {}
		ATarget(ATarget const &x)
		{
			*this = x;
		}
		ATarget(std::string type): type(type) {}

		virtual ~ATarget() {}

		ATarget	&operator=(ATarget const &x)
		{
			type = x.type;
			return *this;
		}

		std::string const	&getType() const {	return type;	}

		virtual ATarget		*clone() const = 0;

		void				getHitBySpell(ASpell const &spell) const
		{
			std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
		}
};