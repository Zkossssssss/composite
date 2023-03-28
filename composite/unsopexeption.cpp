#include "unsopexeption.h"

unsopexeption::unsopexeption() {}

const char* unsopexeption::what() {
	return "Unsupported Operation Exception";
}
