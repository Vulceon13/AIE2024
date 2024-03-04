#include "String.h"
#include "iostream"
using namespace std;

// Constructor Function
String::String() 
{
	
}

// C-Style Version of the Constructor Function
String::String(const char* _str) 
{

}

// Copy Constructor Funcotion 
String::String(const String& _other)
{

}

// Destructor Function
String::~String() 
{

}

// Function to Find the Length of a String
size_t String::Length() const 
{

}

// Gives Access to Characters at a Given Index 
char& String::CharacterAt(size_t _index) 
{

}

// This is a Const Version of The Code Above
const char& String::CharacterAt(size_t _index) const 
{

}

// Checks if 2 Strings are Equal to each other
bool String::EqualTo(const String& _other) const 
{

}

// Adding a string to another string
String& String::Append(const String& _str) 
{

}

// Adding a string to the beginning of another string 
String& String::Prepend(const String& _str) 
{

}

// Converts string to a C-Style String
const char* String::CStr() const 
{

}

// Converts the string to all lowercase
String& String::ToLower() 
{

}

// Converts the string to all uppercase
String& String::ToUpper()
{

}

// Function to find a substring
size_t String::Find(const String& _str) 
{

}

// Function to find a substring with a given index
size_t String::Find(size_t _startIndex, const String& _str) 
{

}

// Function to replace one substring with another string 
String& String::Replace(const String& _find, const String& _replace) 
{

}

// Function to read the console
String& String::ReadFromConsole() 
{

}

// Function to wrtie to the console
String& String::WriteToConsole() 
{

}

// 
bool String::operator==(const String& _other) 
{

}

// 
bool String::operator!=(const String& _other) 
{

}

// 
String& String::operator=(const String& _str) 
{

}

// 
char& String::operator[](size_t _index) 
{ 

}

// 
const char& String::operator[](size_t _index) const 
{

}

