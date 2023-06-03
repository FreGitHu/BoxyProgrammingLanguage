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

	class NodeIf :: Node
	{
	public:
		NodeIf();
		~NodeIf();

	private:

	};

	NodeIf::NodeIf()
	{
	}

	NodeIf::~NodeIf()
	{
	}
}

#endif // !BoxyASTH
