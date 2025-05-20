class Engine:
    def start(self):
        print("Engine starts")

class Car:
    def __init__(self):
        self.e = Engine()
    def drive(self):
        self.e.start()

c = Car()
c.drive()