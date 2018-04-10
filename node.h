/* Author:	Lilly Kane
 *			Kane.Lilly.M+code@gmail.com
 */

#include <iostream>
#include <memory>
#include <string> // TODO remove?

using std::ostream ;
using std::shared_ptr;

namespace bptree {
template <typename T>
class Node {
public:
	Node (int pointerCount=50) ;
	virtual ~Node () = default ;

	bool isLeaf () const ;
	int getSize () const ;
	const T& getKey (int index) const ;
	const void* const getVal (int index) const ;

	void insert (T& key) ;
	void remove (T& key) ;

private:
	int size_ ;
	shared_ptr<void>[] pointers_ ;
	T[] keys_ ;

	void balance_children () ;

friend ostream& operator<< (ostream& os, bptreeNode& other);
};
}
