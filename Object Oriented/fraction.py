class Fraction:

    def __init__(self, numerator=0, denominator=1):
        self.numerator = numerator
        self.denominator = denominator

    def print(self):
        if (self.numerator == 0):
            print(0)
        elif (self.denominator == 1):
            print(self.numerator)
        else:
            print(self.numerator, '/', self.denominator)

    # simplifying the equation
    def simplify(self):
        if (self.numerator == 0):
            self.denominator == 1
            return

        current = min(self.numerator, self.denominator)
        print(current)
        while (current > 1):
            if ((self.numerator % current == 0) and (self.denominator % current == 0)):
                break
            current -= 1
        self.numerator = self.numerator // current

        self.denominator = self.denominator // current

    # adding another fraction
    def add(self, otherFraction):

        if (self.denominator == otherFraction.denominator):
            newNum = self.numerator + otherFraction.numerator
            newDen = self.denominator
        else:
            newNum = self.numerator * otherFraction.denominator + self.denominator * otherFraction.numerator
            newDen = self.denominator * otherFraction.denominator

        self.numerator = newNum
        self.denominator = newDen
        self.simplify()

    def multiply(self, otherFraction):

        newNum = self.numerator * otherFraction.numerator
        newDen = self.denominator * otherFraction.denominator

        self.numerator = newNum
        self.denominator = newDen

        self.simplify()


f1 = Fraction(2, 3)
f2 = Fraction(1, 3)

print(f1.print())
f1.simplify()
print(f1.print())
# f1.add(f2)
# print(f1.print())
f1.multiply(f2)
