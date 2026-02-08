//基于递归的无额外内存使用的斐波那契计算
//递归：Recursion
int Fi_Re_un(int n)
{
	if (n < 2)
	{
		return 1;
	}
	else
	{
		return Fi_Re_un(n - 1) + Fi_Re_un(n - 2);
	}
}

//基于递归的斐波那契优化算法
int Fi_Re(int n)
{
	static int arr[100] = { 0 };
	if (!arr[n])
	{
		arr[n] = Fi_Re(n - 1) + Fi_Re(n - 2);
	}
	return arr[n];
}

//基于迭代的斐波那契的算法
//迭代：Iteration
int Fi_It(int n)
{
	if (n < 2)
	{
		return 1;
	}
	int a = 1;
	int b = 1;
	for (int i1 = 0; i1 < n/2; i1++)
	{
		a += b;
		b += a;
	}
	if (n % 2)
	{
		return a;
	}
	else
	{
		return b;
	}
}
