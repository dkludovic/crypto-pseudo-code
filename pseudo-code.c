/* Generate a RSA key */

int a, b;

while (e divides b) { // e divides (p - 1)
	rand_prime(p, sizeofKey / 2, indexPRNG);
	a = p - 1;
	b = gcd(a, e);
}

while (e divides b) { // e divides (q - 1)
	rand_prime(q, sizeofKey / 2, indexPRNG);
	a = q - 1;
	b = gcd(a, e);
}

N = p x q;
d = 1/e mod [lcm(p – 1) (q – 1)];
