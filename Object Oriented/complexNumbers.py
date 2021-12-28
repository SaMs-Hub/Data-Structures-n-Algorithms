class Complex:
    
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary
        
    def print(self):
        print(f"{self.real} + i{self.imaginary}")
        
    def plus(self, other):
        newReal = self.real + other.real
        newImaginary = self.imaginary + other.imaginary
        
        self.real = newReal
        self.imaginary = newImaginary
        
    def multiply(self, other):
        newReal = self.real * other.real
        newImaginary = self.imaginary * other.imaginary
        
        self.real = newReal
        self.imaginary = newImaginary
        
c1 = Complex(4, 5)
c2 = Complex(3, 3)
print(c1.print())
c1.plus(c2)
print(c1.print())
c1.multiply(c2)
print(c1.print())
