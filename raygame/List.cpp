//#include "List.h"
//#include <iostream>
//#include <set>
//
//template<class T>
//void List<T>::front()
//{
//	return startPtr;
//}
//
//template<class T>
//void List<T>::back()
//{
//	return endptr;
//}
//
//template<class T>
//void List<T>::insertFirst(const T &)
//{
//	if (isEmpty())
//	{
//		startPtr = newPtr;
//		endptr = newPtr;
//	}
//	else
//	{
//		Node<T>* newPtr = new Node<>(dataIn);
//
//		startPtr = newPtr;
//		endptr = newPtr;
//	}
//
//}
//
//
//template<class T>
//void List<T>::insertLast(const T &)
//{
//	if (isEmpty())
//	{
//		startPtr = newPtr;
//		endptr = newPtr;
//	}
//	else
//	{
//	
//		Node<T>* newPtr = new Node<>(dataIn);
//
//		startPtr = newPtr;
//		endptr = newPtr;
//	}
//}
//
//template<class T>
//void List<T>::push(Node<T>* head_ref, T NewDate)
//{
//	Node new_node = new Node();
//
//	new_node->Node<T> = NewDate;
//
//	new_node->next = (*head_ref);
//
//	(*head_ref) = new_node;
//}
//
//template<class T>
//void List<T>::pushBack(Node<T>* End_ref, T NewDate)
//{
//	Node new_node = new Node();
//
//	new_node->Node<T> = NewDate;
//
//	new_node->next = (*End_ref);
//
//	(*End_ref) = new_node;
//}
//
//
//template<class T>
//bool List<T>::isEmpty()
//{
//	//checks if list is empty
//	if (startPtr == NULL && endPtr == NULL) { return 1 }
//	else { return 0 }
//}
