#pragma once
#include "BTNonLeafNode.h"
class BTDecorator :
	public BTNonLeafNode
{
public:
	BTDecorator();
	~BTDecorator();
	virtual BTState Update() = 0;
	BTNonLeafNode* AddChild(BTNode* node);
protected:
	BTNode* child;
};

