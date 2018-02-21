// ErrorCheck.h clas

// CPSC 2720 Assignment 2
/// \ Author Shah Jabeen Sajid
///\ date 17 0ct 2017

#ifndef ERRORCHECK_H
#define ERRORCHECK_H

#include <iostream>
#include <stdexcept>

using namespace std;
using std::runtime_error;
// class of invalid coordinates: chatches the coordinates error
// \ invalid_coordinates_error
class invalid_coordinates_error: public runtime_error
{
  public:
   invalid_coordinates_error()
      :runtime_error("Coordinates are out of bound"){}// Screen::set
  
};
// class of invalid format error: chatches the coordinates error
// \ invalid_Format_error
// @throws input_Format_error
class input_Format_error: public runtime_error
{
  public:
   input_Format_error()
      :runtime_error("Format of the input is not correct"){}// Screen::set
  
};
// class of invalid line error: chatches the line error
// \ invalid_Line_error
// @throws invalid_Line_erro
class invalid_Line_error: public runtime_error
{
  public:
   invalid_Line_error()
      :runtime_error("Attempt to construct a line not vertical or horizontal"){}
   //Line class
};
// class of invalid Screen: chatches the screen error
// \ invalid_Screen_error
// @throws invalid screen error
class invalid_screen_error: public runtime_error
{
  public:
  invalid_screen_error()
      :runtime_error("A screen has not been created"){}
      // main program Screen not created
};

#endif





   
