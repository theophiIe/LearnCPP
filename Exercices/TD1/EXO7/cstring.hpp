#if !defined(__CSTRING__)
#define __CSTRING__
	
	#include <iostream>

	class CString
	{
		public :
			CString();
			CString(char car);
			CString(std::string mot);
			CString(CString &cst);

			static int nbChaine;
			static int nbrChaines();

			CString plus(char car) const;
			CString plus(std::string mot) const;
			
			std::string getString() const;
			
			bool plusGrandQue(CString cst) const;
			bool infOuEgale(CString cst) const;
			
			CString plusGrand(CString cst) const;

			~CString(); 

		private :
			std::string pMot;
	};

#endif