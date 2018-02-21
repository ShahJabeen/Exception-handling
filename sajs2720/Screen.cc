//
// CS 2720 Assignment 1 Solution
//
/// \author Howard Cheng
/// \date September 13, 2017
///
///
/// The Screen class is an abstraction of a 2D character array.
///

#include "Screen.h"
#include <algorithm>
#include <vector>
#include "ErrorCheck.h"


using namespace std;

// constructs a Screen object from the given dimensions
//
// \param[in] height the height of the array, default to 24
// \param[in] width the width of the array, default to 80
Screen::Screen(int height, int width)
  : m_height{height}, m_width{width}
{
   for (int i=0; i<height; i++)
   {
      vector <char> vec2;
      for (int j=0; j<width ; j++)
      {
	 vec2.push_back(' ');
      }
      vec1.push_back(vec2);
   }
}
    
// destroys the object
Screen::~Screen()
{
   vec1.clear();
}

// resets the entire array to spaces
void Screen::clear()
{
   vec1.clear();
}

// sets the character at the given location to the given
// character.  The request is ignored if the location is invalid.
//
// \param[in] row row of the location
// \param[in] col column of the location
// \param[in] ch the character to put into the location
void Screen::set(int row, int col, char ch)
{
   //if (0 <= row && row < m_height && 0 <= col && col < m_width)
   if (0 > row || row > m_height || 0 > col ||col > m_width)
      throw invalid_coordinates_error();
   vec1[row][col]=ch;
}

// output the given Screen object to the output stream
//
// \param[in] os output stream
// \param[in] screen the Screen object
// \return the output stream
ostream &operator<<(ostream &os, const Screen &screen)
{

   for (int row = 0; row < screen.getRows(); row++)
   {
      for (int col = 0; col < screen.getColumns(); col++)
      {
	 os << screen.vec1[row][col];
      }
      os << endl;
   }
     return os;
}


