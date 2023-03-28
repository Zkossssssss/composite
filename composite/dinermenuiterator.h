#pragma once
#include "iterator.h"
#include "menuitem.h"
#include <vector>
class dinermenuiterator : public Iterator {
private:
	vector<MenuItem*> items;
	int position;
public:
	dinermenuiterator(vector<MenuItem*> items);
	bool hasNext();
	void* next1();
};


