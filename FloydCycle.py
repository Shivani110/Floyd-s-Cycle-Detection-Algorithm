class nodeN:
	def __init__(self, x):
		self.n = x
		self.nxt = None
h = None
def findloop(h):
	pointer_S = h
	pointer_F = h

	while (pointer_S != None
		and pointer_F != None
		and pointer_F.nxt != None):
		pointer_S = pointer_S.nxt
		pointer_F = pointer_F.nxt.nxt
		if (pointer_S == pointer_F):
			return 1

	return 0
h = nodeN(10)
h.nxt = nodeN(30)
h.nxt.nxt = nodeN(20)
h.nxt.nxt.nxt = nodeN(40)
h.nxt.nxt.nxt.nxt = nodeN(60)
p = h
while (p.nxt != None):
	p = p.nxt

p.nxt = h
if (findloop(h)):
	print("Loop is exists")
else:
	print("Loop does not exists ")

