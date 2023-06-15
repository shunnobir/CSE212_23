import random, string

def randomstring(length):
    letters = string.ascii_lowercase + string.ascii_uppercase + ' '
    return ''.join(random.choice(letters) for _ in range(length))

n = random.randint(10, 100)
print(n)
for i in range(0, n):
    print(f'{randomstring(random.randint(20, 255))},'
          f'{randomstring(random.randint(20, 80))},'
          f'{randomstring(random.randint(20, 120))},'
          f'{random.randint(100, 1000)},'
          f'{random.randint(100, 1000)}')
