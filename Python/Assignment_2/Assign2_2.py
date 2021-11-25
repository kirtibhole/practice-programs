#2. Write a program which accept one number and #display below pattern. 
#Input : 5 
#Output :
 #* * * * * 
 #* * * * *
# * * * * * 
# * * * * * 
 #* * * * * 
 
def Pattern(iNo):
    for i in range(iNo):
	         for j in range(iNo):
                      print("*",end=" ") 
    print("\n")

def main():
   
   iValue = int(input("enter number: "))
   Pattern(iValue)
 
if __name__=="__main__":
    main()