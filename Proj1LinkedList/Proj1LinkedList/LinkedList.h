#pragma once
#include <vector>

template <typename T>
class LinkedList {
private:
	struct Node {
		Node *_nextPtr;
		Node *_prevPtr;
		T value;
		void recursivePrint(const Node *node);
		Node(Node *front, Node *back, T &value);
	};
	int nodeCount = 0;
	Node *head;
	Node *tail;

public:
	/*==== Behaviors ====*/
	void PrintForward() const;
	void PrintReverse() const;
	void PrintForwardRecursive(const Node *node) const;
	void PrintReverseRecursive(const Node *node) const;
	
	/*==== Accessors ====*/
	unsigned int NodeCount() const;
	void FindAll(std::vector<Node *> &outData, const T&value) const;
	const Node *Find(const T &data) const;
	Node *Find(const T &data);
	const Node * GetNode(unsigned int index) const;
	Node * GetNode(unsigned int index);
	Node *Head();
	const Node *Head() const;
	Node *Tail();
	const Node *Tail() const;

	/*==== Insertion ====*/
	void AddHead(const T &data);
	void AddTail(const T &data);
	void AddNodesHead(const T *data, unsigned int count);
	void AddNodesTail(const T *data, unsigned int count);
	void InsertAfter(Node *node, const T &data);
	void InsertBefore(Node *node, const T &data);
	void InsertAt(const T &data, unsigned int index);

	/*==== Removal ====*/
	bool RemoveHead();
	bool RemoveTail();
	unsigned int Remove(const T &data);
	bool RemoveAt(int index);
	void Clear();

	/*==== Operators ====*/
	const T & operator[](unsigned int index) const;
	T & operator[](unsigned int index);
	bool operator==(const LinkedList<T> &rhs) const;
	LinkedList<T> & operator=(const LinkedList<T> &rhs);

	/*==== Construction / Destruction ====*/
	LinkedList();
	LinkedList(const LinkedList<T> &list);
	~LinkedList();

	
};


	template<typename T>
	void LinkedList<T>::PrintForward() const
	{
	}

	template<typename T>
	void LinkedList<T>::PrintReverse() const
	{
	}

	template<typename T>
	void LinkedList<T>::PrintForwardRecursive(const Node * node) const
	{
	}

	template<typename T>
	void LinkedList<T>::PrintReverseRecursive(const Node * node) const
	{
	}

	template<typename T>
	unsigned int LinkedList<T>::NodeCount() const
	{
		return 0;
	}

	template<typename T>
	void LinkedList<T>::FindAll(std::vector<Node*>& outData, const T & value) const
	{
	}

	template<typename T>
	const typename LinkedList<T>::Node *LinkedList<T>::Find(const T & data) const
	{
		return NULL;
	}

	template<typename T>
	typename LinkedList<T>::Node *LinkedList<T>::Find(const T & data)
	{
		return NULL;
	}

	template<typename T>
	const typename LinkedList<T>::Node *LinkedList<T>::GetNode(unsigned int index) const
	{
		return NULL;
	}

	template<typename T>
	typename LinkedList<T>::Node *LinkedList<T>::GetNode(unsigned int index)
	{
		return NULL;
	}

	template<typename T>
	typename LinkedList<T>::Node *LinkedList<T>::Head()
	{
		return NULL;
	}

	template<typename T>
	const typename LinkedList<T>::Node *LinkedList<T>::Head() const
	{
		return NULL;
	}

	template<typename T>
	typename LinkedList<T>::Node *LinkedList<T>::Tail()
	{
		return NULL;
	}

	template<typename T>
	const typename LinkedList<T>::Node *LinkedList<T>::Tail() const
	{
		return NULL;
	}

	template<typename T>
	void LinkedList<T>::AddHead(const T & data)
	{
	}

	template<typename T>
	void LinkedList<T>::AddTail(const T & data)
	{
	}

	template<typename T>
	void LinkedList<T>::AddNodesHead(const T * data, unsigned int count)
	{
	}

	template<typename T>
	void LinkedList<T>::AddNodesTail(const T * data, unsigned int count)
	{
	}

	template<typename T>
	void LinkedList<T>::InsertAfter(Node * node, const T & data)
	{
	}

	template<typename T>
	void LinkedList<T>::InsertBefore(Node * node, const T & data)
	{
	}

	template<typename T>
	void LinkedList<T>::InsertAt(const T & data, unsigned int index)
	{

	}

	template<typename T>
	bool LinkedList<T>::RemoveHead()
	{
		return false;
	}

	template<typename T>
	bool LinkedList<T>::RemoveTail()
	{
		return false;
	}

	template<typename T>
	unsigned int LinkedList<T>::Remove(const T & data)
	{
		return 0;
	}

	template<typename T>
	bool LinkedList<T>::RemoveAt(int index)
	{
		return false;
	}

	template<typename T>
	void LinkedList<T>::Clear()
	{
	}

	template<typename T>
	const T & LinkedList<T>::operator[](unsigned int index) const
	{
		// TODO: insert return statement here
	}

	template<typename T>
	T & LinkedList<T>::operator[](unsigned int index)
	{
		// TODO: insert return statement here
	}

	template<typename T>
	bool LinkedList<T>::operator==(const LinkedList<T>& rhs) const
	{
		return false;
	}

	template<typename T>
	LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& rhs)
	{
		// TODO: insert return statement here
	}

	template<typename T>
	LinkedList<T>::LinkedList()
	{
	}

	template<typename T>
	LinkedList<T>::LinkedList(const LinkedList<T>& list)
	{
	}

	template<typename T>
	LinkedList<T>::~LinkedList()
	{
	}


template<typename T>
void LinkedList<T>::Node::recursivePrint(const Node * node)
{
}

 template<typename T>
LinkedList<T>::Node::Node(Node * front, Node * back, T &value)
 {
	_nextPtr = front;
	_prevPrt = back;
	_value = value;

 }
