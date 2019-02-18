# hyper-link-listo
Basic linked list implementation (note: NOT OPTIMIZED)
/*ALL the basic/non derivative functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
	/*==== Behaviors ====*/
		void PrintForward() const;
		void PrintReverse() const;
		void PrintForwardRecursive(const Node *node) const;
		void PrintReverseRecursive(const Node *node) const;
	
	/*==== Accessors ====*/
		unsigned int NodeCount() const;
		void FindAll(vector<Node *> &outData, const T&value) const;
		const Node *Find(const T &data) const;
	
		const Node * GetNode(unsigned int index) const;
	
  
		const Node *Head() const;
	
		const Node *Tail() const;

	/*==== Insertion ====*/
	
		void InsertAt(const T &data, unsigned int index);

	/*==== Removal ====*/
	
		unsigned int Remove(const T &data);
		bool RemoveAt(int index);
	
  
/*All the derivative functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

	/*==== Accessors ====*/
		Node *Find(const T &data);
		Node * GetNode(unsigned int index);
		Node *Head();
		Node *Tail();

	/*==== Insertion ====*/
		void AddHead(const T &data);
		void AddTail(const T &data);
		void AddNodesHead(const T *data, unsigned int count);
		void AddNodesTail(const T *data, unsigned int count);
		void InsertAfter(Node *node, const T &data);
		void InsertBefore(Node *node, const T &data);
  
	/*==== Removal ====*/
		bool RemoveHead();
		bool RemoveTail();
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
