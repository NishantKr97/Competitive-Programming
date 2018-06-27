int findGCD(int A, int B)
{
    if(A%B == 0)
        return B;
    return findGCD(B, A/B);
}

int Solution::gcd(int A, int B) {
    return findGCD(B, A);
}
