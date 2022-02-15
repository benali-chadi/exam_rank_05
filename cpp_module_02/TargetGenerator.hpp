#pragma once

#include <vector>

#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

class TargetGenerator {
	private:
		std::vector<ATarget*>	targets;
		
		TargetGenerator(TargetGenerator const &x);
		TargetGenerator	&operator=(TargetGenerator const &x);
	
	public:
		TargetGenerator() {}
		~TargetGenerator() {}

		void	learnTargetType(ATarget *target)
		{
			if (target)
			{
				std::vector<ATarget*>::iterator it = targets.begin();
			
				for (; it != targets.end(); it++)
					if ((*it)->getType() == target->getType())
						return ;

				targets.push_back(target);
			}
		}

		void	forgetTargetType(std::string const &type)
		{
			std::vector<ATarget*>::iterator it = targets.begin();
			
			for (; it != targets.end(); it++)
			{
				if ((*it)->getType() == type)
				{
					targets.erase(it);
					return ;
				}
			}
		}

		ATarget	*createTarget(std::string const &type)
		{
			std::vector<ATarget*>::iterator it = targets.begin();

			for (; it != targets.end(); it++)
				if ((*it)->getType() == type)
					return *it;
			return NULL;
		}

};