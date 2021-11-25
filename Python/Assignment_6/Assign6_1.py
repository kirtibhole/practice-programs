#Write a program which contains one class named as Demo.
#Demo class contains two instance variables as no1 ,no2.
#That class contains one class variable as Value.
#There are two instance methods of class as Fun and Gun 
#which displays values of instance
#variables.
#Initialise instance variable in init method by accepting 
#the values from user.

#After creating the class create the two objects of Demo 
#class as
#Obj1 = Demo(11,21)
#Obj2 = Demo(51,101)
#Now call the instance methods as
#Obj1.Fun()
#Obj2.Fun()
#Obj1.Gun()
#Obj2.Gun() 



class Demo:
 #iValue = 0
 def __init__(self,iNo1,iNo2):
     self.i=iNo1                #instance variabl
     self.j=iNo2
	 
 def Fun(self):
     print(self.i)
     print(self.j)
  
 def Gun(self):
      print(self.i)
      print(self.j)
  
def main():
    Obj = Demo(11,21)
    Obj1 = Demo(51,101)

    Obj.Fun()
    Obj1.Fun()
    Obj.Gun()
    Obj1.Gun()
	 
	 
if __name__=="__main__":
  main()