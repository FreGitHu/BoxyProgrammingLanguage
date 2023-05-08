#ifndef BoxyASTH
#define BoxyASTH
namespace BoxyAST {
	enum NodeType {
		UndefinedType
	};
	class Node
	{
	public:
		Node();
		~Node();
		NodeType type;

	private:

	};

	Node::Node()
	{
	}

	Node::~Node()
	{
	}
}

#endif // !BoxyASTH
