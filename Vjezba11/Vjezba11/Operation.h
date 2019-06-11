#ifndef OPERATION_H
#define OPERATION_H

class Operation
{
public:
	bool check();
	void enterNum(int index);
	void enterOp();
	int execute();
	bool success = false;

private:

	int num1;
	int num2;
	char opSign;
	


};



#endif // !OPERATION_H
