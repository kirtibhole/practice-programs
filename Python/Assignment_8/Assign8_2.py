import threading

def evenfactor(iNo):
    sum=0
    for i in range(1,iNo):
        if iNo%i==0 and i%2==0:
            sum=sum+i
    print("even",sum)
def oddfactor(iNo):
    sum=0
    for i in range(1, iNo):
        if iNo % i == 0 and i % 2 != 0:
            sum = sum + i
    print("odd",sum)
if __name__ == "__main__":
    ivalue = int(input("enter number"))
    thread1 = threading.Thread(target=evenfactor, args=(ivalue,))
    thread2 = threading.Thread(target=oddfactor, args=(ivalue,))
# Will execute both in parallel
    thread1.start()
    thread2.start()
# Joins threads back to the parent process, which is this
# program
    thread1.join()
    thread2.join()
    print(" exit fom main.")