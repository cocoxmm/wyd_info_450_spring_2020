default: main
CFAGS=-g

main: Account.o Checking.o CreditCard.o Savings.o
	g++ -o main main.cpp Account.o Checking.o CreditCard.o Savings.o

Account.o:
	g++ -c Account.cpp Account.h

Checking.o:
	g++ -c Checking.cpp Checking.h

CreditCard.o:
	g++ -c CreditCard.cpp CreditCard.h

Savings.o:
	g++ -c Savings.cpp Savings.h

clean:
	rm -f main Main.o Account.o Checking.o CreditCard.o Savings.o