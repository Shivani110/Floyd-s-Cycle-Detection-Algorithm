#include <bits/stdc++.h>
using namespace std;

class nodeN {
public:
	int n;
	nodeN* nxt;

	nodeN(int n)
	{
		this->n = n;
		nxt = NULL;
	}
};

nodeN* h = NULL;
class linked_list {
public:
	
	void In(int v)
	{
		nodeN* newnodeN = new nodeN(v);
		if (h == NULL)
			h = newnodeN;
		else {
			newnodeN->nxt = h;
			h = newnodeN;
		}
	}

	bool findloop()
	{
		nodeN *pointer_S = h,
			*pointer_F = h;

		while (pointer_S != NULL
			&& pointer_F != NULL
			&& pointer_F->nxt != NULL) 
			{
			pointer_S = pointer_S->nxt;
			pointer_F = pointer_F->nxt->nxt;
			if (pointer_S == pointer_F)
				return 1;
		}

		return 0;
	}
};

int main()
{
	linked_list L;
	L.In(10);
	L.In(30);
	L.In(20);
	L.In(10);
	L.In(60);


	nodeN* p = h;
	while (p->nxt != NULL)
		p = p->nxt;

	p->nxt = h;

	if (L.findloop())
		cout << "Loop is exists" << endl;
	else
		cout << "Loop does not exists" << endl;

	return 0;
}

