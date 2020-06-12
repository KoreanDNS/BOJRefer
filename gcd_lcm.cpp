namespace koreandns
{
	// 유클리드 호제법
	// a를 b로 나눈 나머지를 r이라고 했을 때
	// GCD(a, b) = GCD(b, r)과 같다.
	// r이 0이면 그때 b가 최대 공약수이다.
	// GCD(24, 16) = GCD(16,8) = GCD(8, 0) = 8
	int gcd(int a, int b)
	{
		while (0 != b)
		{
			int r = a % b;
			a = b;
			b = r;
		}
		return a;
	}

	int lcm(int a, int b)
	{
		return a * b / gcd(a, b);
	}
}