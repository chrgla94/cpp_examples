#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
	public:
		MyClass(){}
        void setNumber(int x){number = x;}
        int getNumber(){return number;}

	private:
		int number;
};

#endif //MYCLASS_H

