#ifndef  ROOT_H
#define ROOT_H

class Root {
public:
	virtual void root() = 0;

	virtual void get() = 0;

	virtual void put() = 0;

	virtual ~Root() = default;
};

#endif