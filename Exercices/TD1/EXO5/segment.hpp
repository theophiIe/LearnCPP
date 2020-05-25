#if !defined(__SEGMENT__)
#define __SEGMENT__

	class Segment
	{
		public :
			Segment();
			Segment(int px, int py);
			Segment(const Point &p);

			int getX() const;
			int getY() const;

			void afficher();
			void cloner(const Point &p);

			~Segment(); 

		private :
			int x;
			int y;
	};

#endif