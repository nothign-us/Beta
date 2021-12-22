all: main.cpp
	g++ main.cpp Address.cpp Airport.cpp Client.cpp Date.cpp Flight.cpp makeMenu.h Person.h Seat.h Ticket.cpp Time.cpp -o main
clean: 
	rm main
