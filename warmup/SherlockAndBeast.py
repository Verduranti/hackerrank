cases = int(input())
answers = []

f = open('test','w')
for i in range(0, cases):
	numDigits = int(input())
	if numDigits%3 == 0:
		#all 5s
		string = ["5" for j in range(0, numDigits)]
		answers.append(string)
	else:
		#for 5x + 3y = numDigits (x & y are integers)
		for j in range(numDigits, (numDigits)//2, -1):
			f.write(str(j))
			f.write(" Random j\n")
			if j%3 == 0 and (numDigits-j)%5 == 0:
				f.write(str(j))
				f.write("Passing j\n")
				string = ["5" for num in range(0, j)] + ["3" for num in range(0, numDigits-j)]
				answers.append(string)
				break
			elif j%5 == 0 and (numDigits-j)%3 == 0:
				string = ["5" for num in range(0, numDigits-j)] + ["3" for num in range(0, j)]
				answers.append(string)
				break
		if len(answers) < i+1 and numDigits%5 == 0:
			#all 3s
			string = ["3" for j in range(0, numDigits)]
			answers.append(string)
		
	if len(answers) < i+1:
		answers.append("-1")
		
#f = open('test','w')
for i in answers:
	f.write("".join(i))
	f.write("\n")
	#print("".join(i))