#pragma once
template < class T>
class Tree
{
private:
	struct nod
	{
		T value;
		nod* parent;
		nod* firstChild;
		nod* nextSibling;

		nod(const T& val);
	};

	nod* root = nullptr;
	void deleteSubtree(nod* node);
	int countNodes(nod* node ) const;

public:
	Tree() : root(nullptr) {};
	~Tree();

    nod* add_node(nod* parent, const T& value);
	nod* get_node(nod* node);
	void delete_node(nod* node);
	nod* find(nod* node, const T& value, bool(*compare)(const T&, const T&));
	nod* insert(nod* parent, const T& value, int index);
	void  sort(nod* node, bool(*compare)(const T&, const T&) = nullptr);
	int count(nod* node=nullptr) const;
	void print(nod* node = nullptr, int depth = 0)const;
	nod* get_root()const;
};

