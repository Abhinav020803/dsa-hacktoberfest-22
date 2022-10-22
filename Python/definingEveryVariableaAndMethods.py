class student:
    
    '''This class gives example of every type of variable and methods that can be created.'''
    
    schoolname = "Lucknow Public College"           #static variable (Class level variable)

    def __init__(self, name, roll):                 #Concstructor
        self.name = name                            #Instance variable (Object level variable)
        self.roll = roll

    def ShowDetails(self):                          #Instance method (Object level method)

        self.sr = self.name[:4]+str(self.roll)      #Creating Instance variable outside constructor
        
        print("Name : ", self.name)
        print("Roll : ", self.roll)                 #- accessing instance variables
        print("SRno : ", self.sr)


    @classmethod                                    #- decorator
    def ShowSchool(cls):                            #Class Method (Class level method)
        print("School Name: ", cls.schoolname)      #- accessing static variable

    @staticmethod                                   #- decorator
    def Sum(a,b):                                   #Static Method (General method)
        sum = a + b                                 #Local variable (Method level variable)
        return sum


s1 = student("Abhinav", 2)
s2 = student("Abcdefgh", 20)
s1.ShowDetails()
s1.ShowSchool()
print("Calling static method : ", s2.Sum(10,20))

print("instance variable in s1 : ",s1.__dict__)
print("instance variable in s2 : ",s2.__dict__)



