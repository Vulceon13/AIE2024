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

String& String::Append(const String& _str) 
{

}

String& String::Prepend(const String& _str) 
{

}

const char* String::CStr() const 
{

}

String& String::ToLower() 
{

}

String& String::ToUpper()
{

}

size_t String::Find(const String& _str) 
{

}

size_t String::Find(size_t _startIndex, const String& _str) 
{

}

String& String::Replace(const String& _find, const String& _replace) 
{

}

String& String::ReadFromConsole() 
{

}

String& String::WriteToConsole() 
{

}

bool String::operator==(const String& _other) 
{

}

bool String::operator!=(const String& _other) 
{

}

String& String::operator=(const String& _str) 
{

}

char& String::operator[](size_t _index) 
{ 

}

const char& String::operator[](size_t _index) const 
{

}

