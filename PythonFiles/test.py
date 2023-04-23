

class Student:
    def __init__(self,name,grade):
        self.name= name
        self.grade= grade
    
    def average(grade):
        return(round(sum(grade)/len(grade),2))
    TYPE = ("hardcover","softcover")
    @classmethod
    def hardcover(cls,name,grade):
        return f"name:{name}\ncover{cls.TYPE[0]}\ngrade:{cls.average(grade)}"
    
student = Student("BOB",(1,2,3))

print(student.hardcover("BOB",(1,2,3)))
     

