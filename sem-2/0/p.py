class List:
    def __init__(self):
        self.items = []

    def append(self, x):
        self.items.append(x)

    def extend(self, iterable):
        self.items.extend(iterable)

    def insert(self, i, x):
        self.items.insert(i, x)

    def remove(self, x):
        self.items = [item for item in self.items if item != x]

    def pop(self, i=-1):
        if i < 0:
            return self.items.pop()
        else:
            return self.items.pop(i)

    def clear(self):
        self.items = []

    def index(self, x, start=0, end=None):
        end = end or len(self.items)
        for i in range(start, end):
            if self.items[i] == x:
                return i
        return -1

    def count(self, x):
        return self.items.count(x)

    def sort(self):
        self.items.sort()

    def copy(self):
        return List(self.items.copy())

    def print(self):
        print(' '.join(map(str, self.items)))


fruits = List()
fruits.append('orange')
fruits.append('apple')
fruits.append('pear')
fruits.print()

fruits.extend(['banana', 'kiwi', 'apple', 'banana'])
fruits.print()

fruits.insert(2, 'grape')
fruits.print()

fruits.remove('apple')
fruits.print()

popped = fruits.pop(2)
print('Popped:', popped)
fruits.print()

fruits.clear()
fruits.print()

fruits.extend(['banana', 'apple', 'kiwi'])
fruits.print()

index = fruits.index('banana')
print('Index of banana:', index)

count = fruits.count('apple')
print('Count of apple:', count)
fruits.sort()
fruits.print()

copied = fruits.copy()
copied.print()
fruits.print()