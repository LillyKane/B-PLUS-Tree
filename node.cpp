/* Author:	Lilly Kane
 *			Kane.Lilly.M+code@gmail.com
 */

#include "node.h"

namespace bptree {
template <typename T>
Node<T>::Node (const int pointer_count) :
	size_(pointer_count),
	pointers_(shared_ptr<void>[pointer_count]),
	keys_(shared_ptr<T>[pointer_count-1])
{
	parent_ = nullptr ;
}

template <typename T>
Node<T>::Node (Node<T>& parent, const int pointer_count):
	size_(pointer_count),
	pointers_(shared_ptr<void>[pointer_count]),
	keys_(shared_ptr<T>[pointer_count-1]),
	parent_(parent)
{}

template <typename T>
void Node<T>::insert (const T& key, const shared_ptr<void> value) {
	if (this->is_leaf()) {
		if (pointers_.size() >= size_) {
			// TODO Split into two children and pass up
		}
		else {
			// TODO Insert in order
		}
	}
	else {
		// TODO Find the right child and pass down
	}
}

template <typename T>
void Node<T>::remove (const T& key) {
	if (this->is_leaf()) {
		// Check if the key exists
		for (auto iter = keys_.begin(); iter != keys_.end(); ++iter) {
			if (*iter == key) {
				keys_.erase(iter) ;
				pointers_.erase(iter) ; // TODO how to do this?
			}
		}
	}
	else {
		// TODO Find the right child and pass down
	}
}

template <typename T>
void Node<T>::balance_children () {

}
}
