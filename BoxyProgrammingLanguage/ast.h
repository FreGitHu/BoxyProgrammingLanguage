#ifndef BoxyASTH
#define BoxyASTH
#include<stdint.h>
namespace BoxyAST {
	class Node
	{
	public:
		Node(uint16_t lineno);
		~Node();
		Node* body;
		uint8_t bodyl;
	private:
		uint16_t lineno;
	};

	Node::Node(uint16_t lineno)
	{
	}

	Node::~Node()
	{
	}
}

#endif // !BoxyASTH
