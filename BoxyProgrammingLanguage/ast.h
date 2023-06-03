#ifndef BoxyASTH
#define BoxyASTH
#include<stdint.h>
namespace BoxyAST {
	class Node
	{
	public:
		Node();
		~Node();
		Node* body;
	private:
		uint16_t lineno;
	};

	Node::Node()
	{
	}

	Node::~Node()
	{
	}
}

#endif // !BoxyASTH
