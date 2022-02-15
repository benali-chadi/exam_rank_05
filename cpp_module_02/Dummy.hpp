#pragma once

#include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		Dummy()
		{
			type = "Target Practice Dummy";
		}

		Dummy(Dummy const &x) {	*this = x;	}
		~Dummy() {}

		Dummy	&operator=(Dummy const &x)
		{
			type = x.type;
			return *this;
		}

		ATarget	*clone() const
		{
			return new Dummy();
		}
};
