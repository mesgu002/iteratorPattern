#ifndef LIST_ITERATOR_H
#define LIST_ITERATOR_H

#include "iterator.h"
using namespace std;

template <class Item>
class ListIterator : public Iterator<Item>
{
	public:
		ListIterator (const List<Item>* aList);

		virtual void First();
		virtual void Next();
		virtual bool IsDone() const;
		virtual Item CurrentItem() const;
};

#endif
