#include "struct.h"

struct rat rat_somme(struct rat n1,struct rat n2){
	struct rat rep;
	if (n1.den == n2.den){
		rep.den=n1.den;
		rep.num=n1.num + n2.num;
	}
	else
	{
		rep.den=n1.den*n2.den;
		rep.num=(n1.num*n2.den)+(n1.den*n2.num);
	}
}
