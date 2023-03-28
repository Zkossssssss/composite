#pragma once
#include <iostream>
#include <stdexcept>

class unsopexeption : public std::exception {
public:
	unsopexeption();
	virtual const char* what();
};


