class Musician:
    def __init__(self, age, income):
        self.age = age
        self.income = income
    
    def enter_club(self):
        if self.age < 21:
            return "Access denied"
        else:
            return "Access granted"
    
    def play_show(self):
        self.income += 5

m1 = Musician(25, 100)
m2 = Musician(19,85)
print(m1.enter_club()) 
m1.play_show()
print(m1.income) 
print(m2.enter_club())


#1
# def vowel_count(text):
#     return text.count("a")+text.count("e")+text.count("o")+text.count("u")

# print(vowel_count("vowel"))