#if !defined(__POINT__)
#define __POINT__

	class Point
	{
		public :
			Point();
			Point(int px, int py);
			Point(const Point &p);

			int getX() const;
			int getY() const;

			void afficher();
			void cloner(const Point &p);

			~Point(); 

		private :
			int x;
			int y;
	};

#endif