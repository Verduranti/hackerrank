

int maxValue(vector<int> list)
{
	int max;
	vector<int>::iterator iter;

	max = *(list.begin());

	for(iter=list.begin(); iter < list.end(); iter++)
	{
		if(*iter > max)
		{
			max = *iter;
		}
	}
	return max;
}

root node - node children
node children
.getValue

string sumNodeStrings(Node node)
{
	vector<Node> children = node.getChildren();
	vector<Node>::iterator iter;
	for(iter = children.begin(); iter <= children.end(); iter++)
	{
		s += sumNodes(*iter);
	}
	string s = node.getValue();
	
	return sum;
}