#!/bin/python

def countChildren(count,children,tree):
	for elem in children:
		count = 1 + countChildren(count,tree[elem],tree)

	return count

def divideTree(node):
	global totalSubtrees
	global treeItems

	if len(treeStruct[node]):
		for children in treeStruct[node]:
			if treeItems[children]%2: #branch can be cut from parent
				totalSubtrees += 1
				treeItems[node] = treeItems[node] - treeItems[children] - 1

def solveTreeBody(children,tree):
	for elem in children:
		solveTreeBody(tree[elem],tree)
		divideTree(elem)

treeItems 		= {}
treeTuples 		= []
totalSubtrees 	= 0

t1, t = (raw_input().strip().split(' '))
t = int(t)
for a0 in xrange(t):
    n1, n2 = raw_input().strip().split(' ')
    treeItems[n1] = 0
    treeItems[n2] = 0
    treeTuples.append((n1,n2))

treeStruct 	= { key:[] for key,val in treeItems.items() }

for key,val in treeItems.items():
	for ttuple in treeTuples:
		t0 = ttuple[0]
		t1 = ttuple[1]
		#t0 --> t1
		if (t0 == key and t0 < t1):
			treeStruct[t1].append(t0)
		elif (t1 == key and t1 < t0): 
			treeStruct[t1].append(t0)

for key,val in treeItems.items():
	treeItems[key] = countChildren(0,treeStruct[key],treeStruct)


solveTreeBody(treeStruct['1'],treeStruct)
divideTree('1')

print totalSubtrees
