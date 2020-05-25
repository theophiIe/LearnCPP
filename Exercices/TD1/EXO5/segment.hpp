#if !defined(__SEGMENT__)
#define __SEGMENT__
	
	#include "point.hpp"

	class Segment
	{
		public :
			Segment();
			Segment(const Point &point1, const Point &point2);

			void longueur() const;

			bool estVertical() const;
			bool estHorizontal() const;
			bool estSurDiagonal() const;

			~Segment(); 

		private :
			Point p1{};
			Point p2{};
	};

#endif