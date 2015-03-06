cases = int(input())
answers = []	

for i in range(0, cases):
	string1 = input()
	string2 = input()
	set = {i for i in string1}
	
	for j in string2:
		if set.issuperset(j):
			answers.append("YES")
			break
			
	if len(answers) < i+1:
		answers.append("NO")		
		
for i in answers:
	print(i)
	
