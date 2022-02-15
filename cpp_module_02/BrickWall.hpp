#pragma once

#include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		BrickWall()
		{
			type = "Inconspicuous Red-brick Wall";
		}

		BrickWall(BrickWall const &x) {	*this = x;	}
		~BrickWall() {}

		BrickWall	&operator=(BrickWall const &x)
		{
			type = x.type;
			return *this;
		}

		ATarget	*clone() const
		{
			return new BrickWall();
		}

};