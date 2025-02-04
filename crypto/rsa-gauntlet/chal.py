# dm @lydxn if you need help on a part :)
from Crypto.Util.number import getPrime, isPrime
from math import isqrt, prod
import random
import signal

class Challenge:
    def __init__(self):
        print(f'{self.__class__.__name__}:')
        print('-' * 20)

    def play(self):
        raise NotImplementedError

    def send(self, **kwargs):
        for k, v in kwargs.items():
            print(f'{k} = {v}')

    def ask(self, prompt, answer):
        output = int(input(prompt))
        if output != answer:
            print('Sorry, that is not the right answer!')
            exit()

class RSA_I(Challenge):
    def play(self):
        n = getPrime(512)
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        self.ask('pt = ', pt)

class RSA_II(Challenge):
    def play(self):
        p, q = getPrime(64), getPrime(64)
        n = p * q
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        self.ask('pt = ', pt)

class RSA_III(Challenge):
    def play(self):
        primes = [getPrime(32) for _ in range(8)]
        n = prod(p**i for i, p in enumerate(primes))
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        self.ask('pt = ', pt)

class RSA_IV(Challenge):
    def play(self):
        p, q = getPrime(256), getPrime(256)
        n = p * q
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        hint = p + q
        self.send(hint=hint)
        self.ask('pt = ', pt)

class RSA_V(Challenge):
    def play(self):
        p, q, r = getPrime(256), getPrime(256), getPrime(256)
        n1 = p * q
        n2 = q * r
        e = 65537
        pt = random.randrange(n1)
        ct1 = pow(pt, e, n1)
        ct2 = pow(pt, e, n2)
        self.send(n1=n1, n2=n2, e=e, ct1=ct1, ct2=ct2)
        self.ask('pt = ', pt)

class RSA_VI(Challenge):
    def play(self):
        p = getPrime(256)
        q = p + isqrt(p)
        while not isPrime(q):
            q += 1
        n = p * q
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        self.ask('pt = ', pt)

class RSA_VII(Challenge):
    def play(self):
        n = getPrime(256)
        e = 65537
        pt = random.randrange(n)
        ct1 = pow(pt, e, n)
        ct2 = pow(2, e, n)
        ct3 = pow(3, e, n)
        self.send(e=e, ct1=ct1, ct2=ct2, ct3=ct3)
        self.ask('pt = ', pt)

class RSA_VIII(Challenge):
    def play(self):
        p1, q1 = getPrime(256), getPrime(256)
        p2, q2 = getPrime(256), getPrime(256)
        p3, q3 = getPrime(256), getPrime(256)
        n1, n2, n3 = p1 * q1, p2 * q2, p3 * q3
        e = 3
        pt = random.randrange(min(n1, n2, n3))
        ct1 = pow(pt, e, n1)
        ct2 = pow(pt, e, n2)
        ct3 = pow(pt, e, n3)
        self.send(e=e, ct1=ct1, ct2=ct2, ct3=ct3, n1=n1, n2=n2, n3=n3)
        self.ask('pt = ', pt)

class RSA_IX(Challenge):
    def play(self):
        p, q, r = getPrime(256), getPrime(256), getPrime(256)
        n = p * q
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        hint = (p - 1) * r
        self.send(hint=hint)
        self.ask('pt = ', pt)

class RSA_X(Challenge):
    def play(self):
        p, q, r = getPrime(256), getPrime(256), getPrime(256)
        n = p * q
        e = 65537
        pt = random.randrange(n)
        ct = pow(pt, e, n)
        self.send(n=n, e=e, ct=ct)
        hint = 1337 * p**3 * q + 13 * q**2 + 37 * p**2 + 2 * p - q + 13371337
        self.send(hint=hint)
        self.ask('pt = ', pt)

levels = [
    RSA_I, RSA_II, RSA_III, RSA_IV, RSA_V,
    RSA_VI, RSA_VII, RSA_VIII, RSA_IX, RSA_X,
]

if __name__ == '__main__':
    signal.alarm(60)

    for level in levels:
        level().play()

    with open('flag.txt', 'r') as f:
        print(f.read())
