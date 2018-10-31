#include "StackL.h"
#include "iostream"

int Stack:: size(){
	return data.size();
	
}
void Stack:: push(int i)
{
	
	data.insert(i,1);
	
}

Void Stack:: pop(){
	data.remove(1);
}

int Stack:: top()
 return data.get(i,1);
}

void Stack:: clear(){
	data.clear();
}

