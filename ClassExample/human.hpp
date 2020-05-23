#if !defined(__HUMAN__)
#define __HUMAN__

	#include <string>

	class Human
	{
		public :
			// Exemple de constructeur par default
			Human();
			Human(std::string name);

			// Exemple de constructeur ou l'on doit donner les informations
			Human(std::string name, int age);

			// Exemple de constrcuteur permettant de copier un constructeur
			Human(const Human &other);

			// Permet de détruire l'objet / rendre la mémoire allouée
			~Human(); 

		private :
			std::string mName;
			int mAge;
	};

#endif