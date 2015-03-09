cases = 1
answers = []	

def getSubStrings(strings):
	if len(strings) == 1:
		list = []
		list.extend(strings)
		return list
	list = getSubStrings(strings[1:])
	list.extend([strings[0]+k for k in list])
	list.append(strings[0])
	return list

for i in range(0, cases):
	numChars = 3
	myString = "xyz"
	answers = getSubStrings(myString)
		
for i in answers:
	print(i)

