

def isPrime(n):
    if n == 0 or n == 1 or n < 0:
        return False
    
    for i in range(2,n):
        if n % i == 0:
            return False
    return True


def find_prime_factors(n):
    factors=[]
    i = 3
    while i <= n:
        while n%i==0:
            factors.append(i)
            print(i, ' *')
            n = n/i
        i+=2
    return factors

factors = find_prime_factors(600851475143)

print(factors)
print([isPrime(i) for i in factors])