import sys


def solve(matrix, m_r, m_c, pattern, p_r, p_c):
	found = False

	for i in xrange(m_r):
		for j in xrange(m_c):
			index = matrix[i].find(pattern[0], j, j+p_c)
			if index != -1:
				found = True
				for k in xrange(1, p_r):
					if matrix[k+i].find(pattern[k], index) != index:
						found = False
						break
				if found:
					return True

		if m_r - i <= p_r:
			return found

t = int(raw_input().strip())
for a0 in xrange(t):
	R,C = raw_input().strip().split(' ')
	R,C = [int(R),int(C)]
	G = []
	G_i = 0
	for G_i in xrange(R):
	   G_t = str(raw_input().strip())
	   G.append(G_t)
	r,c = raw_input().strip().split(' ')
	r,c = [int(r),int(c)]
	P = []
	P_i = 0
	for P_i in xrange(r):
		P_t = str(raw_input().strip())
		P.append(P_t)

	if solve(G,R,C,P,r,c):
		print "YES"
	else:
		print "NO"
