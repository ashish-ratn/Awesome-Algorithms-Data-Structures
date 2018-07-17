
void visit( int k, int *id, int val[ ], nodePtr adjList[ ] )‏
{
	nodePtr t;
	*id++;
	val[k] = *id;
	t = adjList[k];
	while (t != NULL)‏
	{
		if (val[ t->v ] == 0)‏
			 visit(t->v, id, val, adjList);
		t = t -> next;
	}
}

void dfs( nodePtr adjList[ ], int n )‏
{
	int k, id;
	int val[1..MAX] = { 0 };
	id = 0;
	for (k = 0; k < n; k++)‏
		if (val(k) == 0)‏
			visit(k, &id, val, adjList);

