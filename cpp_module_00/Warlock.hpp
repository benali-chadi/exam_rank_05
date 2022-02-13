#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;
		
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
		{	std::cout << name << ": I am " << name << ", " << title << std::endl;	}
};

#endif