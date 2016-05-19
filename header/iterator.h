#ifndef ITERATOR_H
#define ITERATOR_H

using namespace std;

template <class Item>
class Iterator
{
	public:
		virtual void First() = 0;
		virtual void Next() = 0;
		virtual bool IsDone() const = 0;
		virtual T CurrentItem() const = 0;

	protected:
		Iterator();
};

#endif
