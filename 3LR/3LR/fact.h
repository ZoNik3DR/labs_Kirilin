#pragma once

int fact(int n)
{
	if (n < 0)
		return 0;
	if (n < 2)
		return 1;
	return n*fact(n - 1);
}
