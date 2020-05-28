#if !defined(__DEFINITION__)
#define __DEFINITION__
	
	#include <iostream>
	
	#include "cstring.hpp"

	class Definition
	{
		public :
			Definition();
			Definition(std::string);
			Definition(std::string mot, std::string def);

			std::string getClef() const;
			std::string getDef() const;

			~Definition(); 

		private :
			CString sMot;
			CString sDef;
	};

#endif