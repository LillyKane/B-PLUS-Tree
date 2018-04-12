/* Author:	Lilly Kane
 *			Kane.Lilly.M+code@gmail.com
 */

#include <iostream>
#include <memory>

using std::ostream ;
using std::shared_ptr;

namespace bptree {
template <typename T>
class Node {
public:
	Node (const int pointer_count=4) ;
	Node (Node<T>& parent, const int pointer_count=4) ;
	virtual ~Node () = default ;

	bool is_leaf () { return false ; }
	bool is_root () { return parent_ == nullptr ; }
	int get_size () const { return size_ ; }
	const T& get_key (int index) const { return keys_.at(index) ; }
	const void* const get_val (int index) const { return pointers_.at(index) ; }

	void insert (const T& key, const shared_ptr<void> value) ;
	void remove (const T& key) ;

private:
	int								size_ ;
	std::vector<shared_ptr<void>>	pointers_ ;
	std::Vector<T>					keys_ ;
	Node<T>							parent_ ;

	void balance_children () ;

friend ostream& operator<< (ostream& os, Node& other);
};
}
